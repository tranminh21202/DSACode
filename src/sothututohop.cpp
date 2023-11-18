#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100], ok;

void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

bool check(int a[100], int b[100], int k){
	for(int i = 1; i <= k; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++) cin >> b[i];
		ktao();
		ok = 1;
		int dem = 1;
		while(ok){
			if(check(a,b,k)){
				cout << dem << endl;
				break;
			}
			else{
				sinh();
				dem++;
			}
		}
	}
}
