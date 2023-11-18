#include<bits/stdc++.h>
using namespace std;
vector<string> v;

void init(){
	queue<string> q;
	q.push("6");
	q.push("8");
	v.push_back("6");
	v.push_back("8");
	while(1){
		string tmp = q.front();
		q.pop();
		if(tmp.length() == 15) break;
		q.push(tmp + "6");
		q.push(tmp + "8");
		v.push_back(tmp + "6");
		v.push_back(tmp + "8");
	}
}

int main(){
	int t; cin >> t;
	init();
	while(t--){
		int n; cin >> n;
		vector<string> kq;
		for(string x : v){
			if(x.length() > n) break;
			kq.push_back(x);
		}
		reverse(kq.begin(), kq.end());
		cout << kq.size() << endl;
		for(string x : kq){
			cout << x << " ";
		}
		cout << endl;
	}
}

