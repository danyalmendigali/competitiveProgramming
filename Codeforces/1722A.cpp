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
	int n;
	int b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		char y[a];
		for(int j = 0; j < a; j++) {
			cin >> y[j];
			int g = 0;
			if(y[j] == 'T') {
				b++;
			}
			if(y[j] == 'i') {
				c++;
			}
			if(y[j] == 'm') {
				d++;
			}
			if(y[j] == 'u') {
				e++;
			}
			if(y[j] == 'r') {
				f++;
			}
			else g += 1;
		}
	}
	  cout << b << c << d << e << f << g;
		
		
	
	
	
	
	
	
	return 0;
}
