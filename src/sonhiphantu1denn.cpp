#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void init(){
	queue<string> q;
	q.push("1");
	v.push_back("1");
	while(v.size() <= 10000){
		string tmp = q.front();
		q.pop();
		q.push(tmp + "0");
		v.push_back(tmp + '0');
		q.push(tmp +'1');
		v.push_back(tmp + '1');
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		init();
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
