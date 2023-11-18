#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
vector<pair<int,int>> dscanh;
bool visited[1005];
int n, m;

void nhap(){
	dscanh.clear();
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
		dscanh.push_back({x,y});
	}
}

void dfs(int u){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]) dfs(v);
	}
}

void dfs2(int u, int s, int t){
	visited[u] = true;
	for(int v : ke[u]){
		if(u == s && v == t || u == t && v == s) continue;
		else if(!visited[v]) dfs2(v,s,t);
	}
}

void canhcau(){
	memset(visited,false,sizeof(visited));
	int tplt = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			tplt++;
			dfs(i);
		}
	}
	for(auto x : dscanh){
		int s = x.first, v = x.second;
		memset(visited,false,sizeof(visited));
		int dem = 0;
		for(int j = 1; j <= n; j++){
			if(!visited[j]){
				dem++;
				dfs2(j,s,v);
			}
		}
		if(dem > tplt) cout << s << " " << v << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		canhcau();
	}
}
