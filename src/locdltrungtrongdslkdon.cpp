#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> v;
	for(int i = 0; i<n; i++){
		int x; cin >> x;
		if (find(v.begin(), v.end(), x) == v.end()){
			v.push_back(x);
		}
	}
	for(int x : v) cout << x << " ";
	cout << endl;
}
