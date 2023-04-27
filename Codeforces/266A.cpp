#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	int k = 0;
	for(int i = 0; i < n - 1; i++) {
		if(s[i] == s[i + 1]) {
			k++;
		}
	}
	cout << k;
	
	
	
	
	
	
	
	
	
	
	
	/* int n;
	cin >> n;
	char arr[n];
	int k = 0;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++) {
		if(arr[i] == arr[i + 1]) {
			++k;
		}
	}
	cout << k; */
	
	
	
	return 0;
}

