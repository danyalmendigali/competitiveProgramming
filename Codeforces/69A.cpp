#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	int n;
	int x, y, z;
	x = y = z = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
	    int X, Y, Z;
	    cin >> X >> Y >> Z;
	    x += X;
	    y += Y;
	    z += Z;	
	}
	
	if(x == 0 && y == 0 && z == 0) cout << "YES";
	else cout << "NO";
	
	
	
	
	return 0;
}
