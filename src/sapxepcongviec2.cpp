#include<bits/stdc++.h>
using namespace std;
struct Job{
	int id, dl, pf;
};

bool cmp(Job a, Job b){
	return a.pf > b.pf;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Job a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].id >> a[i].dl >> a[i].pf;
		}
		sort(a,a+n,cmp);
		int d = 0, res = 0;
		int F[1001] = {0};
		for(int i = 0; i < n; i++){
			while(F[a[i].dl] != 0 && a[i].dl > 0) a[i].dl--;
			if(F[a[i].dl] == 0 && a[i].dl > 0){
				F[a[i].dl] = 1;
				res += a[i].pf;
				d++;
			}
		}
		cout << d << " " << res << endl;
	}
}
