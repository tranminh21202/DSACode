#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int vao[1005];
int n, m;

void nhap(){
	for(int i = 0; i <= 1005; i++) ke[i].clear();
	memset(vao,0,sizeof(vao));
	memset(visited,false,sizeof(visited));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		vao[y]++;
	}
}

bool kahn(){
	queue<int> q;
	for(int i = 1; i <= n; i++){
		if(vao[i] == 0){
			q.push(i);
		}
	}
	int cnt = 0;
	while(!q.empty()){
		int v = q.front(); q.pop();
		cnt++;
		for(int x : ke[v]){
			vao[x]--;
			if(vao[x] == 0){
				q.push(x);
			}
		}
	}
	if(cnt == n) return false;
	else return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		if(kahn()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
