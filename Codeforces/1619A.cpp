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
		string s;
		cin >> s;
		int a = 0;
		for(int j = 0; j < s.size() / 2; j++) {
			for(int h = s.size() / 2 + 1; h < s.size(); h++) {
				if(s[j] == s[h]) {
				a++;	
				}
			}
		}
	
    	cout << a << endl;
}
	
	
	
	
	
	return 0;
}
