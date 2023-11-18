#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> st;
	string s;
	while(cin >> s){
		if(s == "push"){
			int n; cin >> n;
			st.push(n);
		}
		else if(s == "pop"){
			if(!st.empty()) st.pop();
			else continue;
		}
		else if(s == "show"){
			if(!st.empty()){
				stack<int> tmp;
				while(!st.empty()){
					tmp.push(st.top());
					st.pop();
				}
				while(!tmp.empty()){
					cout << tmp.top() << " ";
					st.push(tmp.top());
					tmp.pop();
				}
				cout << endl;
			}
			else cout << "empty" << endl;
		}
	}
}
