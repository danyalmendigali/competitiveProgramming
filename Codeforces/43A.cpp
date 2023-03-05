#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

string s[128];
int n;
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	
	sort(s, s + n);
	
	cout << s[n/2] << endl;
	
	
	
	
	
	
	
	return 0;
}
