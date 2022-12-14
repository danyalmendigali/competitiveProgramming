#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i; j++) {
			swap(arr[i][j], arr[n - j - 1][n - i - 1]);
		}
	}	
	
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	return 0;
}
