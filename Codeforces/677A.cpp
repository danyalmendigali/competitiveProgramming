#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, h, min = 0;
	cin >> n >> h;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		if(arr[i] > h) {
			min += 2;
		}
		if(arr[i] <= h) {
			min += 1;
		}
	}	
	
	cout << min;
	
	
	
	
	return 0;
}

