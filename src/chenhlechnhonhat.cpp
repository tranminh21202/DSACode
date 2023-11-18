#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a,a+n);
		long long min = 1000000001;
		for(int i = 0; i < n - 1; i++){
			if((a[i+1] - a[i]) < min){
				min = a[i+1] - a[i];
			}
		}
		cout << min << endl;
	}
}
