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
	int a, b, s, ans = 0, c = 0;
	cin >> s;
	for(int i = 0; i < s; i++) {
		cin >> a >> b;
		c += b - a;
		ans = max(ans, c);
	}
	
	cout << ans;
	
	
	
	
	
	return 0;
}
