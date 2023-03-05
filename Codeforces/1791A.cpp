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

int letter_search;
int main() {
	cin >> letter_search;
	for(int i = 0; i < letter_search; i++) {
		char a;
		cin >> a;
		if( a == 'd' || a == 'f' || a == 'o' || a == 'r' || a == 'c' || a == 'e' || a == 's') {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	
	
	
	
	
	
	return 0;
}
