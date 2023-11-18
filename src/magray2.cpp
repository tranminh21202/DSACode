#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int a[100], b[100];
		for(int i = 0; i < s.size(); i++){
			a[i] = s[i] - '0';
		}
		b[0] = a[0];
		for(int i = 1; i < s.size(); i++){
			if(a[i] == b[i-1]) b[i] = 0;
			else b[i] = 1;
		}
		for(int i = 0; i < s.size(); i++) cout << b[i];
		cout << endl;
		memset(b, 0, sizeof(b));
//		string res;
//		res[0] = s[0];
//		for(int i = 1; i < s.size(); i++){
//			if(s[i] == res[i-1]) res[i] = '0';
//			else res[i] = '1';
//		}
//		cout << res << endl;
	}
}
