#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n], c[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		stack<int> st;
		for(int i = 0; i < n; i++){
			if(st.empty()) st.push(i);
			else{
				while(!st.empty() && a[st.top()] < a[i]){
					b[st.top()] = i;
					st.pop();
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			b[st.top()] = -1;
			st.pop();
		}
		for(int i = 0; i < n; i++){
			if(st.empty()) st.push(i);
			else{
				while(!st.empty() && a[st.top()] > a[i]){
					c[st.top()] = a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			c[st.top()] = -1;
			st.pop();
		}
		for(int i = 0; i < n; i++){
			if(b[i] == -1) cout << -1 << " ";
			else cout << c[b[i]] << " ";
		}
		cout << endl;
	}
}
