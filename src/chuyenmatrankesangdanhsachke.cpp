#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n+1][n+1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	vector<int> ke[1001];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j < i; j++){
			if(a[i][j] == 1){
				ke[i].push_back(j);
				ke[j].push_back(i);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j : ke[i]){
			cout << j << " ";
		}
		cout << endl;
	}
}
