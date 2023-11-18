#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
int color[1005];
int n, m;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	memset(color,0,sizeof(color));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

bool dfs(int u, int par){
	color[u] = 3 - color[par];
	for(int v : ke[u]){
		if(color[v] == 0){
			if(!dfs(v,u)) return false;
		}
		else if(color[v] == color[u]) return false;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		bool ok = true;
		color[0] = 2;
		for(int i = 1; i <= n; i++){
			if(color[i] == 0){
				if(!dfs(i,0)){
					ok = false;
				}
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
