#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	stack<char> st;
	int n = s.length();
	for(int i = 0; i < n; i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
		else{
			if(st.empty()) return false;
			if(s[i] == ')' && st.top() == '(') st.pop();
			else if(s[i] == ']' && st.top() == '[') st.pop();
			else if(s[i] == '}' && st.top() == '{') st.pop();
			else return false;
		}
	}
	return st.empty();
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
