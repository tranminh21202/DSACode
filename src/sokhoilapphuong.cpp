#include<bits/stdc++.h>
using namespace std;

map<long long, bool> LP;
vector<int> a;
int b[20], n, res;

void nhap(){
	a.clear();
	res = -1;
	string s;
	cin >> s;
	n = s.length();
	for(int i = 0; i < n; i++){
		a.push_back(s[i] - '0');
	}
}

void check(){
	long long tmp = 0;
	for(int i = 0; i < n; i++){
		if(b[i]) tmp = tmp * 10 + a[i];
	}
	if(LP[tmp] == true && tmp > res && tmp != 0) res = tmp;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n - 1) check();
		else Try(i+1);
	}
}

int main(){
	for(long long i = 1; i <= 1000000; i++) LP[i * i * i] = true;
	int t; cin >> t;
	while(t--){
		nhap();
		Try(0);
		cout << res << endl;
	}
}
