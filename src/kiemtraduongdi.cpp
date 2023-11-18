#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int n, m;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	memset(visited,false,sizeof(visited));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

void dfs(int u){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		int q; cin >> q;
		while(q--){
			int s, t;
			cin >> s >> t;
			memset(visited,false,sizeof(visited));
			dfs(s);
			if(visited[t] == true) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
