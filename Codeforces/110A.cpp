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

string s;
int a = 0;
int main() {
	cin >> s;
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '4' || s[i] == '7') {
			a++;
		}
	}
	
	if(a == 4 || a == 7) {
		cout << "YES";
	}
	else cout << "NO";
	
	
	
	
	
	
	return 0;
}
