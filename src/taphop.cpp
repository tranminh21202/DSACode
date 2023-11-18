#include<bits/stdc++.h>
using namespace std;
int n, k, s, a[100], ok;
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

bool check(){
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum += a[i];
	}
	return sum == s;
}
int main(){
	while(1){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		if(n < k) cout << 0 << endl;
		else{
			ok = 1;
			ktao();
			int res = 0;
			while(ok){
				if(check()) res++;
				sinh();
			}
			cout << res << endl;
		}
	}
}
