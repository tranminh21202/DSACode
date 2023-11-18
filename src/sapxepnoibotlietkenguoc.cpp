#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(n);
		stack<vector<int>> st;
		for(int &x : v) cin >> x;
		for(int i = 0; i < n - 1; i++){
			bool ok = false;
			for(int j = 0; j < n - i - 1; j++){
				if(v[j] > v[j+1]){
					swap(v[j], v[j+1]);
					ok = true;
				}
			}
			if(ok == false) break;
			st.push(v);
		}
		int dem = st.size();
		while(dem--){
			cout << "Buoc " << st.size() << ": ";
			v = st.top(); st.pop();
			for(int x : v) cout << x << " ";
			cout << endl;
		}
	}
}
