#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> v(n);
	vector<int> tmp;
	stack<vector<int>> st;
	for(int &x : v) cin >> x;
	for(int i = 0; i < n; i++){
		int x = v[i], pos = i - 1;
		while(pos >= 0 && v[pos] > x){
			v[pos + 1] = v[pos];
			pos--;
		}
		v[pos + 1] = x;
		for(int j = 0; j <= i; j++) tmp.push_back(v[j]);
		st.push(tmp);
		tmp.clear();
	}
	int dem = st.size();
	while(st.size()){
		cout << "Buoc " << dem - 1 << ": ";
		dem--;
		v = st.top(); st.pop();
		for(int x : v) cout << x << " ";
		cout << endl;
	}
}
