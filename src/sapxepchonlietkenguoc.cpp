#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> v(n);
	stack<vector<int> > st;
	for(int &x : v) cin >> x;
	for(int i = 0; i < n-1; i++){
		int x = i;
		int min = v[i];
		for(int j = i+1; j < n; j++){
			if(min > v[j]){
				x = j;
				min = v[j];
			}
		}
		swap(v[i], v[x]);
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
