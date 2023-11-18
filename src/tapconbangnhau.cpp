#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		int sum = 0;
		for(int &x: a){
			cin >> x;
			sum += x;
		}
		if(sum % 2 == 0) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
