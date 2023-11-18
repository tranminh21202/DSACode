#include<bits/stdc++.h>
using namespace std;
int dem(long long n){
	queue<long long> q;
	vector<long long> v;
	q.push(1);
	while(!q.empty()){
		long long tmp = q.front();
		q.pop();
		if(tmp <= n){
			v.push_back(tmp);
			q.push(tmp * 10);
			q.push(tmp * 10 + 1);
		}
	}
	return v.size();
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		cout << dem(n) << endl;
	}
}
