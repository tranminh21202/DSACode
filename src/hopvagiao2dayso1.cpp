#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n], b[m];
		for(int &x : a) cin >> x;
		for(int &y : b) cin >> y;
		vector<int> hop,giao;
		int i=0, j=0;
		while(i<n && j<m){
			if(a[i]<b[j]){
				hop.push_back(a[i]);
				i++;
			}
			else if(b[j]<a[i]){
				hop.push_back(b[j]);
				j++;
			}
			else if(a[i] == b[j]){
				giao.push_back(a[i]);
				hop.push_back(a[i]);
				i++; j++;
			}
		}
		while(i<n){
			hop.push_back(a[i]);
			i++;
		}
		while(j<m){
			hop.push_back(b[j]);
			j++;
		}
		for(int x:hop) cout << x << " ";
		cout << endl;
		for(int x:giao) cout << x << " ";
		cout << endl;
	}
}
