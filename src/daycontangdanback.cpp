#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, a[1000], x[1000];
int cnt = 0;

void init(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
}

bool check(){
	for(int i = 1; i < k; i++){
		if(a[x[i]] > a[x[i + 1]]) return false;
	}
	return true;
}

void Try(int i){
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k){
			if(check()){
				cnt++;
			}
		}
		else Try(i + 1);
	}
}

int main(){
	init();
	Try(1);
	cout << cnt;
}
