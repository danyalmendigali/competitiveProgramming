#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for(int i = 1; i < n; i += 2) {
		for(int j = 1; j < n; j += 2)
		cout << arr[i] << " " << arr[j] << " "; 
 	}
	
	
	
	
	
	
	
	return 0;
}
