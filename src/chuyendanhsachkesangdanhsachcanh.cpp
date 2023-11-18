#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	cin.ignore();
	vector<pair<int,int>> canh;
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		int x;
		while(ss >> x){
			if(x > i) canh.push_back({i,x});
		}
	}
	for(auto x : canh){
		cout << x.first << " " << x.second << endl;
	}
}
