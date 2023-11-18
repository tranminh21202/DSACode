#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long n; cin >> n;
		long a[n];
		for(long &x : a) cin >> x;
		long min = *min_element(a,a+n);
		long min2 = 10000001;
		bool ok = false;
		for(int i = 0; i < n; i++){
			if(a[i] < min2 && a[i] > min){
				min2 = a[i];
				ok = true;
			}
		}
		if(ok) cout << min << " " << min2 << endl;
		else cout << -1 << endl;
	}
}
