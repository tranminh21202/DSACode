#include<bits/stdc++.h>
using namespace std;

bool timKiem(long long a[], int l, int r, long long x){
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x) return true;
		else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a,a+n);
		bool ok = false;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				long long tmp = sqrt((a[i] * a[i]) + (a[j] * a[j]));
				if(tmp * tmp == (a[i] * a[i]) + (a[j] * a[j])){
					if(timKiem(a,j+1,n, tmp)){
						ok = true;
						break;
					}
				}
			}
			if(ok) break;
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
