#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long n; cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		bool ok = false;
		long dem = 0;
		for(long i = 0; i < n-1; i++){
			if(a[i] <= a[i+1]){
				dem++;
				ok = true;
			}
			else{
				dem++;
				break;
			}
		}
		cout << dem << endl;
	}
}
