#include<bits/stdc++.h>
using namespace std;
int cnt[5];
int firstpos(int b[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(b[m] > x){
			res = m;
			r = m - 1;
		}
		else l = m + 1;
	}
	return res;
}

int count(int b[], int m, int x){
	if(x == 0) return 0;
	if(x == 1) return cnt[0];
	int ans = cnt[0] + cnt[1];
	int l = firstpos(b, 0, m-1, x);
	if(l != -1) ans += m - l;
	if(x == 2){
		ans -= (cnt[3] + cnt[4]);
	}
	if(x == 3){
		ans += cnt[2];
	}
	return ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int &x : a) cin >> x;
		for(int i = 0; i<m; i++){
			cin >> b[i];
			if(b[i] <= 4) cnt[b[i]]++;
		}
		sort(b, b+m);
		int ans = 0;
		for(int x : a){
			ans += count(b,m,x);
		}
		cout << ans << endl;
		memset(cnt, 0, sizeof(cnt));
	}
}
