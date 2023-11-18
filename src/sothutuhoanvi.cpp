#include<bits/stdc++.h>
using namespace std;
int n, a[100], b[100], ok;
void ktao(){
	cin >> n;
	ok = 1;
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
}

void sinh(){
	int i = n - 1;
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

bool check(int a[100], int b[100], int n){
	for(int i = 1; i <= n; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		for(int i = 1; i <= n; i++) a[i] = i;
		int kq = 1;
		while(ok){
			if(check(a,b,n)){
				cout << kq << endl;
				break;
			}
			else{
				kq++;
				sinh();
			}
		}
	}
}
