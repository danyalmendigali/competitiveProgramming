#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define array arr

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, k = 0, x;
	cin >> n;
	vector <int> A(n, 0);
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
		cin >> x;
	
	for(int i = 0; i < n; i++) {
		if(A[i] == x) {
			k++;
		}
	}
	
	
	cout << k;	
	
	
	
	
	
	
	
	return 0;
}
