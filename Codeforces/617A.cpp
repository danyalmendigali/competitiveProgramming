#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int s, k = 0;
	cin >> s;
	while(s) {
		if(s > 4) {
			s -= 5;
			k++;
		}
		else if(s > 3) {
			s -= 4;
			k++;
		}
		else if(s > 2) {
			s -= 3;
			k++;
		}
		else if(s > 1) {
			s -= 2;
			k++;
		} 
		else if(s > 0) {
			s -= 1;
			k++;
		}
	}	
	
	
	cout << k;
	
	
	
	return 0;
}
