#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	stack<int> st;
	while(t--){
		string s;
		cin >> s;
		if(s == "PUSH"){
			int n; cin >> n;
			st.push(n);
		}
		else if(s == "PRINT"){
			if(!st.empty()){
				cout << st.top() << endl;
			}
			else cout << "NONE" << endl;
		}
		else if(s == "POP"){
			if(!st.empty()){
				st.pop();
			}
			else continue;
		}
	}
}
