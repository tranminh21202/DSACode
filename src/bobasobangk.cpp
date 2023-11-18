#include<bits/stdc++.h>
using namespace std;

int timkiem(long a[], int l, int r, long x){
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x) return 1;
		else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		long n, k; cin >> n >> k;
		long a[n];
		map<long, long> mp;
		for(int i = 0; i<n; i++){
			cin >> a[i];	
		}
		sort(a, a+n);
		bool ok = false;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(timkiem(a,j+1,n-1,k-a[i]-a[j])){
					ok = true;
					break;
				}
			}
			if(ok) break;
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
