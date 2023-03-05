#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a, s;
	cin >> a;
	for(int i = 0; i < a; i++) {
		int b = 0, c = 0, d = 0, e = 0, f = 0;
		cin >> s;
		for(int j = 0; j < s; j++) {
			char y;
			cin >> y;
			if(y == 'T') {
				b++;
			}
			if(y == 'i') {
				c++;
			}
			if(y == 'm') {
				d++;
			}
			if(y == 'u') {
				e++;
			}
			if(y == 'r') {
				f++;
			}
	}

		
		if(b == 1 && c == 1 && d == 1 && e == 1 && f == 1) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	
	
	
	
	return 0;
}
