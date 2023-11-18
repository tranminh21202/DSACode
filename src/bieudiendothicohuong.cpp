#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector<int> ke[1005];
		for(int i = 0; i < m; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
		}
		for(int i = 1; i <= n; i++){
			cout << i << ": ";
			for(int j = 0; j < ke[i].size(); j++){
				cout << ke[i][j] << " ";
			}
			cout << endl;
		}
	}
}
