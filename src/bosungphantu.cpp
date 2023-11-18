#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a,a+n);
		int dem = 0;
		for(int i=0; i<n-1; i++){
			if(a[i] + 1 < a[i+1]){
				dem += (a[i+1] - a[i] - 1);
			}
		}
		cout << dem << endl;
	}
}
