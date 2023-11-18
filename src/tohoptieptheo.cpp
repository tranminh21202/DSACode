#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100], ok;
void ktao(){
	cin >> n >> k;
	ok = 1;
	for(int i = 1; i <= k; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= k; i++){
		b[i] = a[i];
	}
}
void next(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		next();
		if(ok == 0) cout << k << endl;
		else{
			int kq = 0;
			for(int i = 1; i <= k; i++){
				bool check = true;
				for(int j = 1; j <= k; j++){
					if(b[j] == a[i]){
						check = false;
					}
				}
				if(check == true) kq++;
			}
			cout << kq << endl;
		}
		memset(b,0,sizeof(b));
	}
}
