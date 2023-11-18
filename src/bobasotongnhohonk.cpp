#include<bits/stdc++.h>
using namespace std;
long long tim(long long a[], int l, int r, long long k){
	int res = -1;
	while(l <= r){
		int m = (l+r) / 2;
		if(a[m] < k){
			res = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long k; cin >> k;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a, a+n);
		long dem = 0;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				long long x = k - a[i] - a[j];
				int res = tim(a,j+1,n-1,x);
				if(res != -1){
					dem += res - j;
				}
			}
		}
		cout << dem << endl;
	}
}
