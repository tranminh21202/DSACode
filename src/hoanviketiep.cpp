#include<bits/stdc++.h>
using namespace std;
int n, a[10000], ok;
void ktao(){
	cin >> n;
	ok = 1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
}

void next(){
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1]){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		next();
		if(ok == 0){
			for(int i = 1; i <= n; i++) cout << i << " ";
			cout << endl;
		}
		else in();
	}
}
