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
		int a, b, c;
		cin >> a >> b >> c;
		int maxA, minA, g;
		maxA = max(a, max(b, c));
		minA = min(a, min(b, c));
		g = (a + b + c) - (maxA + minA);
		cout << g << endl;
		
	}
	
	
	
	
	return 0;
}	
