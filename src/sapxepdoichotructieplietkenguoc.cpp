#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v;
		stack<vector<int> > st;
		for(int i = 0; i<n; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i<n-1; i++){
			for(int j = i+1; j<n; j++){
				if(v[i] > v[j]){
					swap(v[i], v[j]);
				}
			}
			st.push(v);
		}
		int dem = st.size();
		while(dem--){
			cout << "Buoc " << st.size() << ": ";
			v = st.top();
			st.pop();
			for(int i = 0; i < n; i++){
				cout << v[i] << " ";
			}
			cout << endl;
		}
	}
}
