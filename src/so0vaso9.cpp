#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<long> q;
		q.push(9);
		while(q.size() != 0){
			long tmp = q.front();
			if(tmp % n == 0){
				cout << tmp << endl;
				break;
			}
			q.pop();
			q.push(tmp * 10);
			q.push(tmp * 10 + 9);
		}
	}
}
