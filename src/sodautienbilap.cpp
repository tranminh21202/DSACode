#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long a[n];
		map<long, long> mp; 
		bool oke = false;
		for(long i=0; i<n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(long i=0; i<n; i++){
			if(mp[a[i]] > 1){
				cout << a[i] << endl;
				oke = true;
				break;
			}
		}
		if(oke == false) cout << "NO" << endl;
	}
}
