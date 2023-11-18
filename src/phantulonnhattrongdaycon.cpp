#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		long a[n];
		for(long &x : a) cin >> x;
		vector<long> v;
		for(int i = 0; i <= n - k; i++){
			long m = *max_element(a+i, a+i+k);
			v.push_back(m);
		}
		for(long x : v) cout << x << " ";
		cout << endl;
	}
}
