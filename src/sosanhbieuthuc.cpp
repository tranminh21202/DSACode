#include<bits/stdc++.h>
using namespace std;

string xuly(string s){
	stack<int> st;
	int n = s.length() - 1; 
	for(int i = 0; i <= n; i++){
		if(s[i] == '(' && s[i-1] == '-') st.push(i - 1);
		else if(s[i] == ')' && !st.empty()){
			for(int j = st.top() + 2; j < i; j++){
				if(s[j] == '-') s[j] = '+';
				else if(s[j] == '+') s[j] = '-';
			}
			st.pop();
		}
	}
	string res = "";
	if(s[0] != '+' && s[0] != '(') res = res + s[0];
	for(int i = 1; i <= n; i++){
		if(s[i] != '(' && s[i] != ')') res = res + s[i];
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2; 
		cin >> s1 >> s2;
		s1 = xuly(s1);
		s2 = xuly(s2);
		if(s1 == s2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
