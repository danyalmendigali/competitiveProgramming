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
	int a, b, j = 0, k = 0;
	cin >> a;
	for(int i = 0; i < a; i++) {
		cin >> b;
		if(b > 0) {
			j++;
		}
		else {
			j = 0;
		}
		if(j > k) k = j;
	}
	
	cout << k;
	
	
	
	
	return 0;
}
