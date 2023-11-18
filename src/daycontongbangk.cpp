#include<bits/stdc++.h>
using namespace std;

int n, k, a[20], ok;
bool check;
vector<int> v;

void nhap(){
	cin >> n >> k;
	ok = 1;
	check = true;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}

bool checkdk(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]) sum += v[i - 1];
	}
	return sum == k;
}

int main(){
	int t; cin >> t;
	while(t--){
		v.clear();
		stack<vector<int>> st;
		nhap();
		while(ok){
			if(checkdk()){
				check = false;
				vector<int> tmp;
				for(int i = 1; i <= n; i++){
					if(a[i]) tmp.push_back(v[i-1]);
				}
				st.push(tmp);
			}
			sinh();
		}
		if(check == true) cout << -1 << endl;
		else{
			while(!st.empty()){
				v = st.top(); st.pop();
				cout << '[';
				for(int i = 0; i < v.size() - 1; i++) cout << v[i] << " ";
				cout << v[v.size() - 1];
				cout << ']' << " ";
			}
		}
		cout << endl;
	}
}
