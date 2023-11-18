#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<int> b(n, 1);
		for(int i = 0; i < n; i++) cin >> a[i];
		stack<int> st;
		for(int i = 0; i < n; i++){
			if(st.empty()) st.push(i);
			else{
				while(!st.empty() && a[st.top()] <= a[i]){
					b[i] = b[i] + b[st.top()];
					st.pop();
				}
				st.push(i);
			}
		}
		for(int i = 0; i < n; i++) cout << b[i] << " ";
		cout << endl;
	}
}
