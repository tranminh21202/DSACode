#include<bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void ktao(){
	cin >> n; 
	ok = 1;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i] = 1;
	}
}

void in(){
	cout << a[1];
	for(int i = 2; i <= n; i++){
		if(a[i] == a[i-1]) cout << 0;
		else cout << 1;
	}
	cout << " ";
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		while(ok){
			in();
			sinh();
		}
		cout << endl;
	}
}
