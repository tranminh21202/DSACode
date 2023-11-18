#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
int visited[1005];
int n, m;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	memset(visited,0,sizeof(visited));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
}

bool dfs(int u, int par){
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			if(dfs(v,u)) return true;
		}
		else if(visited[v] == 1) return true;
	}
	visited[u] = 2;
	return false;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		bool ok = false;
		for(int i = 1; i <= n; i++){
			if(!visited[i] && dfs(i,0)){
				ok = true;
				break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
