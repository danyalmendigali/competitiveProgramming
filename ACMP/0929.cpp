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
	long long int n, max, min;
	cin >> n;
	max = 6 * n;
	min = n / 6;
	n %= 6;
	if(n > 0) min += 7 - n;
	cout << min << " " << max;
	
	
	
	
	
	return 0;
}
