#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		long a[n+m];
		for(long &x : a) cin >> x;
		sort(a,a+n+m);
		for(long x : a){
			cout << x << " ";
		}
		cout << endl;
	}
}
