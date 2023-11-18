#include<bits/stdc++.h>
using namespace std;

vector<int> res;
bool check(int tmp){
	vector<int> v;
	while(tmp > 0){
		int x = tmp % 10;
		tmp /= 10;
		if(x > 5 || find(v.begin(), v.end(), x) != v.end()) return false;
		v.push_back(tmp);
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		cout << check(l) << " " << check(r);
	}
}
