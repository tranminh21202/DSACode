#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long n1, n2, n3; cin >> n1 >> n2 >> n3;
		long long a[n1], b[n2], c[n3];
		for(long long &x : a) cin >> x;
		for(long long &x : b) cin >> x;
		for(long long &x : c) cin >> x;
		long i = 0, j = 0, k = 0, l = 0;
		vector<long long> v;
		while(i < n1 && j < n2){
			if(a[i] < b[j]){
				i++;
			}
			else if(b[j] < a[i]){
				j++;
			}
			else if(a[i] == b[j]){
				v.push_back(a[i]);
				i++; j++;
			}
		}
		vector<long long> kq;
		while(k < v.size() && l < n3){
			if(v[k] > c[l]){
				l++;
			}
			else if(v[k] < c[l]){
				k++;
			}
			else if(v[k] == c[l]){
				kq.push_back(v[k]);
				k++; l++;
			}
		}
		if(kq.size() > 0){
			for(long long x : kq) cout << x << " ";
			cout << endl;
		}
		else cout << -1 << endl;
	}
}
