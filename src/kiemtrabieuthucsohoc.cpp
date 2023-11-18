#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	stack<int> st;
	int n = s.length(), i;
	for(i = 0; i < n; i++){
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')'){
			int j = st.top(); st.pop();
			if(i - j == 2) return false;
			else if(s[j + 1] == '(' && s[i - 1] == ')') return false;
		}
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(!check(s)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
