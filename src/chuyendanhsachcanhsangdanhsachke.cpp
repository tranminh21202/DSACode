#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1001];

int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 0; i < 1001; i++) ke[i].clear();
		int n, m; cin >> n >> m;
		for(int i = 0; i < m; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1; i <= n; i++){
			cout << i << ": ";
			for(int j : ke[i]){
				cout << j << " ";
			}
			cout << endl;
		}
	}
}
