#include<bits/stdc++.h>
using namespace std;

int tinhtoan(int a, int b, char x){
	if(x == '+') return a + b;
	else if(x == '-') return a - b;
	else if(x == '*') return a * b;
	else return a / b;
}

void tinh_hauto(string s){
	stack<int> st;
	for(int i = 0; i < s.length(); i++){
		if(isdigit(s[i])) st.push(s[i] - '0');
		else{
			int tmp1 = st.top(); st.pop();
			int tmp2 = st.top(); st.pop();
			int tmp = tinhtoan(tmp2,tmp1,s[i]);
			st.push(tmp);
		}
	}
	cout << st.top() << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		tinh_hauto(s);
	}
}
