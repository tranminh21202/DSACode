#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		long tong = 10000000;
		for(int i = 0; i<n-1; i++){
			for(int j = i+1; j<n; j++){
				if(abs(a[i] + a[j]) < abs(tong)){
					tong = a[i] + a[j];
				}
			}
		}
		cout << tong << endl;
	}
}
