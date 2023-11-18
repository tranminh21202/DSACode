#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], ok;
set<int> s;
map<int, int> mp;
void ktao(){
	cin >> n >> k;
	ok = 1;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		s.insert(x);
	}
	int dem = 1;
	for(int x : s){
		mp[dem] = x;
		a[dem] = dem;
		dem++;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == s.size()-k+i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

void in(){
	for(int i = 1; i <= k; i++){
		cout << mp[a[i]] << " ";
	}
	cout << endl;
}

int main(){
	ktao();
	while(ok){
		in();
		sinh();
	}
}
