#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		int dem = 0;
		for(int i=0;i<n-1;i++){
			int x = i;
			int y = a[i];
			for(int j=i+1;j<n;j++){
				if(a[j] < y){
					x = j;
					y = a[j];
				}
			}
			swap(a[i],a[x]);
			if(x!=i) dem++;
		}
		cout << dem << endl;
	}
}
