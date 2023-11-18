#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		long a[n];
		map<long, long> mp;
		for(int i=0 ; i<n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		long long ans = 0;
		for(int i=0;i<n;i++){
			ans += mp[k - a[i]];
			if(a[i] * 2 == k) ans--;
		}
		cout << ans/2 << endl;
	}
}
