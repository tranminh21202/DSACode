#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	int dem = 1;
	while(t--){
		int n; cin >> n;
		cout << "Test " << dem << ": ";
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				int s = 0;
				while(n % i == 0){
					s += 1;
					n /= i;
				}
				cout << i << "(" << s << ") ";
			}
		}
		if(n > 1) cout << n << "(1)";
		cout << endl;
		dem++;
	}
}
