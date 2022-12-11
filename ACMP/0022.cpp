#include <iostream>
using namespace std;

int main() {
	int n, s = 0;
	cin >> n;
	while(n != 0) {
	  s+= n % 2;
	  n /= 2;
	}
	cout << s;
	
	
	return 0;
}
