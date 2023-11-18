#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	queue<int> q;
	while(t--){
		string s;
		cin >> s;
		if(s == "PUSH"){
			int n; cin >> n;
			q.push(n);
		}
		else if(s == "POP"){
			if(!q.empty()) q.pop();
			else continue;
		}
		else if(s == "PRINTFRONT"){
			if(!q.empty()){
				int tmp = q.front();
				cout << tmp << endl;
			}
			else cout << "NONE" << endl;
		}
	}
}
