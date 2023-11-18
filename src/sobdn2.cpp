#include<bits/stdc++.h>
using namespace std;

long long tinh(int n){
	queue<long long> q;
	q.push(1);
	while(!q.empty()){
		long long tmp = q.front();
		q.pop();
		if(tmp % n == 0) return tmp;
		else{
			q.push(tmp * 10);
			q.push(tmp * 10 + 1);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << tinh(n) << endl;
	}
}
