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

bool checkdfs(int u, int par){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]){
			if(checkdfs(v,u)) return true;
		}
		else if(v != par) return true;
	}
	return false;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		bool ok = false;
		for(int i = 1; i <= n; i++){
			if(!visited[i] && checkdfs(i,0)){
				ok = true;
				break;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
