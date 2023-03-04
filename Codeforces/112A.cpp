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

string a, b;
int main() {
	cin >> a >> b;
	for(int i = 0; i < (int)a.size(); i++) {
		if(a[i] >= 'A' && a[i] <= 'Z')
		a[i] = a[i] - 'A' + 'a';
	}
	
	for(int i = 0; i < (int)b.size(); i++) {
		if(b[i] >= 'A' && b[i] <= 'Z')
		b[i] = b[i] - 'A' + 'a';
	}
	
	if(a < b) cout << -1;
	
	else if ( a > b) {
	   cout << 1;
}
	
	else cout << 0;
	
	

	return 0;
}
