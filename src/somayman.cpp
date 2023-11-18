#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		bool check = true;
		int d4 = 0, d7 = 0;
		for(int i = 0; i <= n/4; i++){
			int s = n - (4 * i);
			if(s % 7 == 0 && s > 0){
				d4 = i;
				d7 = s/7;
				check = false;
				break;
			}
		}
		if(check) cout << -1 << endl;
		else{
			for(int i = 1; i <= d4; i++) cout << 4;
			for(int i = 1; i <= d7; i++) cout << 7;
			cout << endl;
		}
	}
}
