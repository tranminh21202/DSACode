#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
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
		for(int i = 0; i < s.length(); i++){
			if(s[i] != '(' && s[i] != ')') cout << s[i];
		}
		cout << endl;
	}
}
