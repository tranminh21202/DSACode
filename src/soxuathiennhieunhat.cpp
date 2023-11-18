#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a,a+n);
		int ts = 0, kq = -1;
		int dem = 1;
		for(int i=0;i<n-1;i++){
			if(a[i] == a[i+1]){
				dem++;
			}
			else{
				if(dem > ts){
					ts = dem;
					kq = a[i];
					dem = 1;
				}
				else dem = 1;
			}
		}
		if(dem > ts){
			ts = dem;
			kq = a[n-1];
		}
		if(ts > int(n/2)) cout << kq << endl;
		else cout << "NO" << endl;
	}
}
