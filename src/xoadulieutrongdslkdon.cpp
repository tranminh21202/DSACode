#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> v;
	int a[n];
	for(int &x : a) cin >> x;
	int x; cin >> x;
	for(int i : a){
		if(i != x) v.push_back(i);
	}
	for(int x : v) cout << x << " ";
	cout << endl;
}
