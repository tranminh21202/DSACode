#include<bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void ktao(){
	cin >> n;
	ok = 1;
	for(int i = 1; i <= n; i++) a[i] = 0;
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i] = 1;
		for(int j = i + 1; j <= n; j++) a[j] = 0;
	}
}

void in(){
	for(int i = 1; i <= n; i++){
			if(a[i] == 1) cout << 8;
			else cout << 6;
		}
		cout << endl;
}

bool check(){
	if(n < 6) return false;
	if(a[1] != 1 || a[n] != 0) return false;
	int dem = 1;
	for(int i = 1; i <= n - 1; i++){
		if(a[i] == 1){
			if(a[i+1] == 1) return false;
			dem = 1;
		}
		else{
			if(a[i+1] == 0){
				dem++;
				if(dem > 3) return false;
			}
		}
	}
	return true;
}

int main(){
	ktao();
	while(ok){
		if(check()) in();
		sinh();
	}
}
