#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
vector<int> parent(1005);
int n, m, s, t;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	memset(visited,false,sizeof(visited));
	parent.clear();
	cin >> n >> m >> s >> t;
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
			parent[v] = u;
			dfs(v);
		}
	}
}

int main(){
	int q; cin >> q;
	while(q--){
		nhap();
		dfs(s);
		if(!visited[t]) cout << -1 << endl;
		else{
			vector<int> kq;
			while(t != s){
				kq.push_back(t);
				t = parent[t];
			}
			kq.push_back(s);
			reverse(begin(kq), end(kq));
			for(int x : kq) cout << x << " ";
			cout << endl;
		}
	}
}
