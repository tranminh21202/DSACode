#include<bits/stdc++.h>
using namespace std;

struct canh{
	int x, y, z;
};

vector<int> ke[1005];
vector<canh> dscanh;
int par[1005], size[1005];
int n, m;

int find(int u){
	if(u == par[u]) return u;
	else return par[u] = find(par[u]);
}

bool Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b) return false;
	if(size[a] < size[b]) swap(a,b);
	size[a] += size[b];
	par[b] = a;
	return true;
}

void nhap(){
	dscanh.clear();
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		par[i] = i;
		size[i] = i;
	}
	for(int i = 0; i < m; i++){
		int x, y, z;
		cin >> x >> y >> z;
		dscanh.push_back({x,y,z});
	}
}

bool cmp(canh a, canh b){
	return a.z < b.z;
}

void kruskal(){
	//sort(begin(dscanh), end(dscanh), cmp);
	sort(begin(dscanh), end(dscanh), [](canh a, canh b) -> bool{
		return a.z < b.z;
	});
	vector<canh> tree;
	int ans = 0;
	for(int i = 0; i < m; i++){
		if(tree.size() == n - 1) break;
		else{
			if(Union(dscanh[i].x, dscanh[i].y)){
				tree.push_back(dscanh[i]);
				ans += dscanh[i].z;
			}
		}
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		kruskal();
	}
}

