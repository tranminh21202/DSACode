#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		priority_queue<int> pq;
		map<char, int> mp;
		for(char x : s){
			mp[x]++;
		}
		for(auto it : mp){
			pq.push(it.second);
		}
		while(k > 0){
			int tmp = pq.top(); pq.pop();
			tmp--; k--;
			pq.push(max(tmp,0));
		}
		long long ans = 0;
		while(!pq.empty()){
			ans += 1ll * pq.top() * pq.top();
			pq.pop();
		}
		cout << ans << endl;
	}
}
