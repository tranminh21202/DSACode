#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int n, m, s;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	cin >> n >> m >> s;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){
	cout << u << " ";
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
		dfs(s);
		cout << endl;
	}
}
