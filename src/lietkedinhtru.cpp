#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int n, m;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
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

void tplt(){
	memset(visited,false,sizeof(visited));
	int tplt = 0;
	for(int  i = 1; i <= n; i++){
		if(!visited[i]){
			tplt++;
			dfs(i);
		}
	}
	for(int i = 1; i <= n; i++){
		memset(visited,false,sizeof(visited));
		visited[i] = true;
		int dem = 0;
		for(int j = 1; j <= n; j++){
			if(!visited[j]){
				dem++;
				dfs(j);
			}
		}
		if(dem > tplt){
			cout << i << " ";
		}
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		tplt();
	}
}
