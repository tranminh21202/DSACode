#include<bits/stdc++.h>
using namespace std;

string solve(string s){
	stack<int> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '(' && s[i-1] == '-') st.push(i);
		else if(!st.empty() && s[i] == ')'){
			for(int j = st.top() + 1; j < i; j++){
				if(s[j] == '-') s[j] = '+';
				else if(s[j] == '+') s[j] = '-';
			}
			st.pop();
		}
	}
	string res = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] != '(' && s[i] != ')') res += s[i];
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		s1 = solve(s1);
		s2 = solve(s2);
		if(s1 == s2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
