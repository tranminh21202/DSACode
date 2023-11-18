#include<bits/stdc++.h>
using namespace std;
int timkiem(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i] == x){
			return 1;
		}
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int &x : a) cin >> x;
		cout << timkiem(a,n,x) << endl;
	}
}
