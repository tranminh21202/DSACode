#include<bits/stdc++.h>
using namespace std;
int checknto(int n){
	if(n < 2) return 0;
	for(int i=2; i <= sqrt(n); i++){
		if(n % i ==0 ) return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		bool ok = false;
		for(int i=2; i <= int(n/2); i++){
			if(checknto(i) == 1 && checknto(n-i) == 1 ){
				cout << i << " " << n-i << endl;
				ok = true;
				break;
			}
		}
		if(ok == false) cout << -1 << endl;
	}
}
