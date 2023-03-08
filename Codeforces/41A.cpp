#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int count = 0;
	string s, s1;
	cin >> s >> s1;
	if(s.size() != s1.size()) {
		cout << "NO";
		return false;
	}
	
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == s1[s1.size() - i - 1]) {
			count++;
		}
		
	}
		
	if(count == s.size()) {
		cout << "YES";
	}
	else cout << "NO";
	
 

	
	
	
	
	
	return 0;
}
