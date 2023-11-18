#include<bits/stdc++.h>
using namespace std;
int n, a[100], b[100], ok;
map<int, int> mp;
void ktao(){
	cin >> n;
	ok = 1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n; i++){
		mp[i] = a[i];
		b[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while(i >=  1 && b[i] > b[i+1]){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		int j = n;
		while(b[i] > b[j]) j--;
		swap(b[i], b[j]);
		reverse(b + i + 1, b + n + 1);
	}
}

void in(){
	for(int i = 1; i <= n; i++){
		cout << mp[b[i]] << " ";
	}
	cout << endl;
}

int main(){
	ktao();
	while(ok){
		in();
		sinh();
	}
}
