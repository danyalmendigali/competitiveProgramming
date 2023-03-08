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

int gcd(int a, int b) {
	if(a * b == 0) return a + b;
	if(a < b) return gcd(a, b % a);
	else return gcd(a % b, b);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << a * b / gcd(a, b);

	
	
	
	
	return 0;
}
