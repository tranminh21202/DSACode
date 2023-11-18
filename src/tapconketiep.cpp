#include<bits/stdc++.h>
using namespace std;
int n, k, a[1001], ok;
void ktao(){
	cin >> n >> k;
	ok = 1;
	for(int i = 1; i <= k; i++){
		cin >> a[i];
	}
}

void next(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i){
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

void in(){
	for(int i = 1; i <= k; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		next();
		if(ok) in();
		else{
			for(int i = 1; i <= k; i++){
				cout << i << " ";
			}
			cout << endl;
		}
	}
}
