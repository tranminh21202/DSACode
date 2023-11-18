#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int n, m, s;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	memset(visited, false, sizeof(visited));
	cin >> n >> m >> s;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front(); q.pop();
		cout << v << " ";
		for(int x : ke[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		bfs(s);
		cout << endl;
	}
}
