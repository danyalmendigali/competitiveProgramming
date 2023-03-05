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

int big, small;
int main() {
	string s;
	cin >> s;
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z') {
			big++;
		}
		else small++;
	}
	
	
	if(big > small) {
		for(int i = 0; i < s.size(); i++) {
			if(s[i] >= 'A' && s[i] <= 'Z') {
				cout << s[i];
			}
			else cout << (char)(s[i] - 'a' + 'A');
		}
	}
	else {
		for(int i = 0; i < s.size(); i++) {
			if(s[i] >= 'A' && s[i] <= 'Z') {
				cout << (char)(s[i] - 'A' + 'a');
			}
			else cout << s[i];
		}
	}
	
	
	
	
	
	return 0;
}
