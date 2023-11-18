#include<bits/stdc++.h>
using namespace std;

int a[15], used[15], n;
vector<char> v;

void nhap(){
	v.clear();
	string s; cin >> s;
	for(char x : s) v.push_back(x);
	n = v.size();
}

void in(){
	for(int i = 1; i <= n; i++){
		cout << v[a[i] - 1];
	}
	cout << " ";
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == 0){
			a[i] = j;
			used[j] = 1;
			if(i == n) in();
			else Try(i+1);
			used[j] = 0;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		Try(1);
		cout << endl;
	}
}
