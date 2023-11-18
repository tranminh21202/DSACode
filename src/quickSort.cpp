#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high){
	int pivot = a[high];
	int left = low, right = high - 1;
	while(true){
		while(left <= right && a[left] < pivot) left++;
		while(right >= left && a[right] > pivot) right--;
		if(left >= right) break;
		swap(a[left], a[right]);
		left++; right--;
	}
	swap(a[left], a[high]);
	return left;
}

void quickSort(int a[], int low, int high){
	if(low < high){
		int pivot = partition(a, low, high);
		
		quickSort(a, low, pivot - 1);
		quickSort(a, pivot + 1, high);
	}
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	quickSort(a,0,n-1);
	for(int x : a) cout << x << " ";
	cout << endl;
}
