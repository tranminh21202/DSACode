#include<bits/stdc++.h>
using namespace std;
int tknhiphan(int a[], int b, int n, int x){
	int l = b, r = n-1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x) return m;
		else if(a[m] < x) l = l + 1;
		else r = r -1;
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, x, k = -1;
		cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(i != 0 && a[i]<a[i-1] && k==-1) k = i;
		}
		int kq = tknhiphan(a,0,k,x);
		if(kq != -1) cout << kq + 1 << endl;
		else cout << tknhiphan(a,k,n,x) + 1 << endl;
	}
}
