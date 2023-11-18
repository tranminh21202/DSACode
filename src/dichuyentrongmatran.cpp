#include<bits/stdc++.h>
using namespace std;
int m, n;
int a[1005][1005];
int kq[1005][1005];
void ktao(){
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void xuly(int m, int n){
	queue<pair<int,int>> q;
	memset(kq, -1, sizeof(kq));
	pair<int,int> tmp = {1,1};
	q.push(tmp);
	kq[1][1] = 0;
	while(!q.empty()){
		pair<int,int> t = q.front();
		q.pop();
		int x = t.first, y = t.second;
		if(kq[x + a[x][y]][y] == -1){
			kq[x + a[x][y]][y] = kq[x][y] + 1;
			pair<int,int> tmp = {x + a[x][y], y};
			q.push(tmp);
		}
		if(kq[x][y + a[x][y]] == -1){
			kq[x][y + a[x][y]] = kq[x][y] + 1;
			pair<int,int> tmp = {x, y + a[x][y]};
			q.push(tmp);
		}
		if(kq[m][n] != -1) return;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		xuly(m, n);
		cout << kq[m][n] << endl;
	}
}
