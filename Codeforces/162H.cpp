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
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(i % 2 == 0) {
			s[i] = toupper(s[i]);
		}
		if(i % 2 == 1) {
			s[i] = tolower(s[i]);
		}
	}
	cout << s;
	
	
	
	
	return 0;
}
