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
	int a, b, k = 0;
	cin >> a >> b;
	while(a <= b) {
		k++;
		a *= 3;
		b *= 2;
	}
	
	cout << k;
	
	
	
	
	
	return 0;
}
