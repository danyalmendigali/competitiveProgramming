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
	cin >> n;
	
	for(int i = 0; i < n; i++) {	
	int a, b, c, d, maxa;
	cin >> a >> b >> c >> d;
	
	maxa = max(b, max(c, d));
	
	if(a < maxa) {
		if(maxa == b) {
			cout << 1 << endl;
		}
		if(maxa == c) {
			cout << 2 << endl;
		}
		if(maxa == d) {
			cout << 3 << endl;
		}
    }
    else cout << 0 << endl;
}
	
	
	
	
	return 0;
}
