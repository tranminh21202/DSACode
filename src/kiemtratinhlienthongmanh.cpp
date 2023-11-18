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
		bool check = false;
		for(int i = 1; i <= n; i++){
			if(!check){
				memset(visited,false,sizeof(visited));
				dfs(i);
				for(int i = 1; i <= n; i++){
					if(!visited[i]){
						cout << "NO" << endl;
						check = true;
						break;
					}
				}
			}
			else break;
		}
		if(check == false) cout << "YES" << endl;
	}
}
