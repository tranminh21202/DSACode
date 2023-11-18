#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		while(true){
			cout << '[';
			for(int i = 0; i < v.size() - 1; i++) cout << v[i] << " ";
			cout << v[v.size()-1] << ']' << endl;
			if(v.size() == 1) break;
			else{
				for(int i = 0; i < v.size() - 1; i++){
					v[i] = v[i] + v[i + 1];
				}
				v.pop_back();
			}
		}
	}
}
