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
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0; i < s.size(); i++) {
		for(int j = 0; j < s.size(); j++) {
			if(s[i] != s[j]) {
				count++;
			}
			if(s[i] == s[j]) {
				break;
			}
		}
	}
	
	cout << count;
	
	
	
	
	return 0;
}

