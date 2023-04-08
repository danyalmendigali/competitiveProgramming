#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	string s;
	int a, b = 0;
	cin >> s;
	a = s.size();
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == s[a - 1 - i]) {
			b++;
		}
	}
	
	if(b == a) {
		cout << "yes";
	}
	else cout << "no";
	
	
	
	return 0;
}
