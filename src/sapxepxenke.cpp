#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		sort(a,a+n);
		if(n%2 == 1){
			for(int i=0;i<=int(n/2);i++){
				if(n-i-1 != i) cout<< a[n-i-1] << " " << a[i] << " ";
				else cout<< a[i];
			}
		}
		else{
			for(int i=0;i<int(n/2);i++){
				cout << a[n-i-1] << " " << a[i] << " ";
			}
		}
		cout << endl;
	}
}
