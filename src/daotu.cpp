#include<bits/stdc++.h>
using namespace std;

string xuly(string s){
	stack<string> st;
	int n = s.length();
	string tmp = "";
	for(int i = 0; i < n; i++){
		if(s[i] != ' ') tmp = tmp + s[i];
		else{
			st.push(tmp);
			tmp = "";
		}
	}
	if(tmp != "") st.push(tmp);
	string kq = "";
	while(!st.empty()){
		string top = st.top();
		st.pop();
		kq = kq + top + " ";
	}
	return kq;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		cout << xuly(s) << endl;
	}
}
