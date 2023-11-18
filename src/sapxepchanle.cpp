#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	long a[n];
	vector<long> chan, le;
	for(int i = 1; i<=n; i++){
		cin >> a[i];
		if(i % 2 == 0) chan.push_back(a[i]);
		else le.push_back(a[i]);
	}
	sort(chan.begin(), chan.end(), greater<int>());
	sort(le.begin(), le.end());
	int i = 0, j =0;
	for(int k = 1; k <= n; k++){
		if(k % 2 == 0){
			cout << chan[i] << " ";
			i++;
		}
		else{
			cout << le[j] << " ";
			j++;
		}
	}
}
