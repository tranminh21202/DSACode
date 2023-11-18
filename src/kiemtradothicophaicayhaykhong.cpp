#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int n;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	memset(visited,false,sizeof(visited));
	cin >> n;
	for(int i = 0; i < n - 1; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

bool dfs(int u, int par){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]){
			if(dfs(v,u)) return true;
		}
		else if(v != par) return true;
	}
	return false;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		bool ok = true;
		if(dfs(1,0)){
			ok = false;
		}
		else{
			for(int i = 1; i <= n; i++){
				if(!visited[i]) ok = false;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
