#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if(s == "Yes" || s == "YES" || s == "yes" || s == "yES" || s == "YeS" || s == "yeS" || s == "yEs" || s == "YEs" ) {
			cout << "YES" << endl;
		}
		
		else cout << "NO" << endl;
	}
	
	
	
	
	
	
	return 0;
}
