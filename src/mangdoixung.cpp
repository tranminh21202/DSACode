#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		int ok = 1;
		for(int i = 0; i <= int(n/2); i++){
			if(a[n-i-1] != a[i]){
				ok = 0;
				break;
			}
		}
		if(ok == 1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
