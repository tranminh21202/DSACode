#include<bits/stdc++.h>
using namespace std;

struct LC{
	int bd, kt;
};

bool cmp(LC a, LC b){
	return a.kt < b.kt;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		LC a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].bd >> a[i].kt;
		}
		sort(a,a+n,cmp);
		int i = 0, res = 1;
		for(int j = 1; j < n; j++){
			if(a[i].kt <= a[j].bd){
				res++;
				i = j;
			}
		}
		cout << res << endl;
	}
}
