#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		long a[n], b[m];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		long m1 = *max_element(a,a+n);
		long m2 = *min_element(b,b+m);
		cout << 1ll*m1*m2 << endl;
	}
}
