#include<bits/stdc++.h>
using namespace std;

int pre(char c){
	if(c == '(') return 0;
	else if(c == '+' || c == '-') return 1;
	else if(c == '*' || c == '/') return 2;
	else if(c == '^') return 3;
}

long long tinhtoan(long long a, long long b, char c){
	if(c == '+') return a + b;
	else if(c == '-') return a - b;
	else if(c == '*') return a * b;
	else if(c == '/') return a / b;
}

void tinh_trungto(string s){
	stack<char> st1;
	stack<long long> st2;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '(') st1.push(s[i]);
		else if(isdigit(s[i])){
			long long tmp = 0;
			while(i < s.length() && isdigit(s[i])){
				tmp = tmp * 10 + s[i] - '0';
				i++;
			}
			st2.push(tmp);
			i--;
		}
		else if(s[i] == ')'){
			while(!st1.empty() && st1.top() != '('){
				long long tmp1 = st2.top(); st2.pop();
				long long tmp2 = st2.top(); st2.pop();
				long long res = tinhtoan(tmp2, tmp1, st1.top());
				st2.push(res);
				st1.pop();
			}
			st1.pop();
		}
		else{
			while(!st1.empty() && pre(st1.top()) >= pre(s[i])){
				long long tmp1 = st2.top(); st2.pop();
				long long tmp2 = st2.top(); st2.pop();
				long long res = tinhtoan(tmp2, tmp1, st1.top());
				st2.push(res);
				st1.pop();
			}
			st1.push(s[i]);
		}
	}
	while(!st1.empty()){
		long long tmp1 = st2.top(); st2.pop();
		long long tmp2 = st2.top(); st2.pop();
		long long res = tinhtoan(tmp2, tmp1, st1.top());
		st2.push(res);
		st1.pop();
	}
	cout << st2.top() << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		tinh_trungto(s);
	}
}
