#include<bits/stdc++.h>
using namespace std;
int n, ok;
vector<int> v(n);
stack<vector<int>> st;
void ktao(){
	cin >> n;
	ok = 1;
	for(int i = 1; i <= n; i++){
		v.push_back(i);
	}
}

void sinh(){
	int i = n - 2;
	while(i >= 0 && v[i] > v[i + 1]){
		i--;
	}
	if(i < 0) ok = 0;
	else{
		int j = n-1;
		while(v[i] > v[j]){
			j--;
		}
		swap(v[i], v[j]);
		int l = i + 1, r = n-1;
		while(l < r){
			swap(v[l], v[r]);
			l++; r--;
		}
	}
}

void in(){
	int d = st.size();
	while(d--){
		v = st.top(); st.pop();
		for(int i = 0; i < n; i++) cout << v[i];
		cout << " "; 
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		while(ok){
			st.push(v);
			sinh();
		}
		in();
		v.clear();	
	}
}

