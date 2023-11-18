#include<bits/stdc++.h>
using namespace std;

int tinh(string s){
	stack<char> st;
	int n = s.length(), dem = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '(') st.push(s[i]);
		else{
			if(!st.empty()){
				st.pop();
			}
			else{
				st.push('(');
				dem++;
			}
		}
	}
	return dem + st.size()/2;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << tinh(s) << endl;
	}
}
