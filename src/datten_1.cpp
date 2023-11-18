#include<bits/stdc++.h>
using namespace std;

int n, k, a[50];
vector<string> v;

void nhap(){
	cin >> n >> k;
	cin.ignore();
	string s; getline(cin, s);
	string tmp;
	for(int i = 0; i < s.length(); i++){
		if(s[i] != ' ') tmp = tmp + s[i];
		else{
			if(find(v.begin(), v.end(), tmp) == v.end()){
				v.push_back(tmp);
				tmp = "";
			}
			else tmp = "";
		}
	}
	if(find(v.begin(), v.end(), tmp) == v.end()){
		v.push_back(tmp);
	}
	n = v.size();
	sort(v.begin(), v.end());
}

void in(){
	for(int i = 1; i <= k; i++){
		cout << v[a[i] - 1] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = a[i-1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}

int main(){
	nhap();
	Try(1);
}

