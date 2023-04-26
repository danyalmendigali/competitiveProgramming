#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define array arr

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a, b, c, d, s = 0;
		cin >> a >> b >> c >> d;
		if(a < b) {
			s++;
		}
		if(a < c) {
			s++;
		}
		if(a < d) {
			s++;
		}	
		cout << s << endl; 
	}
	
	
	
	
	
	return 0;
}
