#include<bits/stdc++.h>
using namespace std;
int n,x;

bool cmp(int a, int b){
	return abs(x-a) < abs(x-b);
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		int a[n];
		for(int &x : a) cin >> x;
		stable_sort(a,a+n,cmp);
		for(int x : a) cout << x << " ";
		cout << endl;
	}
}
