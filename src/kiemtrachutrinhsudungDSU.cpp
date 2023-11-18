#include<bits/stdc++.h>
using namespace std;

int par[1005];
int n, m;

void ktao(){
	for(int i = 1; i <= n; i++) par[i] = i;
}

int find(int u){
	if(u == par[u]) return u;
	else return par[u] = find(par[u]);
}

bool Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b) return false;
	if(a < b) par[b] = a;
	else par[a] = b;
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		ktao();
		bool ok = false;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			if(Union(x, y) == false) ok =true;
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
