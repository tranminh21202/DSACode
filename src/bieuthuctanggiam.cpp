#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> st;
		string res = "";
		for(int i = 0; i < s.length(); i++){
			st.push(i+1);
			if(s[i] == 'I'){
				while(!st.empty()){
					res += to_string(st.top());
					st.pop();
				}
			}
		}
		st.push(s.length() + 1);
		while(!st.empty()){
			res += to_string(st.top());
			st.pop();
		}
		cout << res << endl;
	}
}
