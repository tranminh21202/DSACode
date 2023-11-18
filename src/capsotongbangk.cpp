#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		for(int &x:a) cin >> x;
		int dem = 0;
		for(int i=0; i<n-1; i++){
			for(int j = i+1; j<n; j++){
				if(a[i] + a[j] == k){
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
}
