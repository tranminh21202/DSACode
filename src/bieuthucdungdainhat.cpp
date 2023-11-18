#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int dem = 0;
		stack<char> st;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '(') st.push(s[i]);
			else{
				if(!st.empty()){
					st.pop();
					dem += 2;
				}
			}
		}
		cout << dem << endl;
	}
}
