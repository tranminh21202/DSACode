#include<bits/stdc++.h>
using namespace std;

int xuly(long n){
	queue<pair<long,int>> q;
	set<long> s;
	q.push({n,0});
	s.insert(n);
	while(!q.empty()){
		pair<int,int> tmp = q.front(); q.pop();
		long x = tmp.first; int y = tmp.second;
		if(x == 1) return y;
		if(x - 1 == 1) return y + 1;
		if(x - 1 > 1 && s.find(x - 1) == s.end()){
			q.push({x-1, y + 1});
			s.insert(x-1);
		}
		for(long i = 2; i <= sqrt(x); i++){
			if(x % i == 0){
				if(s.find(x/i) == s.end()){
					q.push({x/i, y + 1});
					s.insert(x/i);
				}
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		long n; cin >> n;
		cout << xuly(n) << endl;
	}
}
