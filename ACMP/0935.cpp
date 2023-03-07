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
	int x1, y1, x2, y2, a, b;
	cin >> x1 >> y1 >> x2 >> y2;
	a = x1 + y1;
	b = x2 + y2;
	if(a % 2 == b % 2) cout << "YES";
	else cout << "NO";
	
	
	
	return 0;
}
