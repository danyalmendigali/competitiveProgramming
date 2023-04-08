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
	getline(cin, s);
	
	sort(s.begin(), s.end());
	
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == s[i + 1]) {
		cout << s[i];
		return 0;	
	   }
	}
	
	
	
	return 0;
}
