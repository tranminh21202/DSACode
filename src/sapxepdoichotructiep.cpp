#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(a[j] < a[i]){
				swap(a[i], a[j]);
			}
		}
		cout << "Buoc " << i+1 << ": ";
		for(int x : a) cout << x << " ";
		cout << endl;
	}
}
