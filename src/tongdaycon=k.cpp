#include<bits/stdc++.h>
using namespace std;
int n, k, cnt, a[100], b[100], ok;
void ktao(){
	cin >> n >> k;
	ok = 1;
	cnt = 0;
	for(int i = 1; i <= n; i++){
		cin >> b[i];
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i] = 1;
		for(int j = i + 1; j <= n; j++){
			a[j] = 0;
		}
	}
}

void in(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]){
			sum += b[i];
		}
	}
	if(sum == k){
		cnt++;
		for(int i = 1; i <= n; i++){
			if(a[i]) cout << b[i] << " ";
		}
		cout << endl;
	}
}

int main(){
	ktao();
	while(ok){
		in();
		sinh();
	}
	cout << cnt << endl;
}
