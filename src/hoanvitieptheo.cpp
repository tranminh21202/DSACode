#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; 
		string s;
		cin >> n;
		cin.ignore();
		getline(cin, s);
		int i = 0;
		int a[s.size()];
		for(char x : s){
			a[i] = x - '0';
			i++;
		}
		cout << n << " ";
		if(next_permutation(a, a + i)){
			for(int x : a) cout << x;
			cout << endl;
		}
		else cout << "BIGGEST" << endl;
	}
}
