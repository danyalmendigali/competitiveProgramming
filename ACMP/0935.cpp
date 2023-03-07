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
	int x1, y1, x2, y2, a1, b1;
	cin >> x1 >> y1 >> x2 >> y2;
	a1 = x1 + y1;
	b1= x2 + y2;
	if(a1 % 2 == b1 % 2) cout << "YES";
	else cout << "NO";
	
	
	
	return 0;
}
