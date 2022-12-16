#include <iostream>
using namespace std; 

unsigned long long h, a, m, x, i;

int main() {
	cin >> m;
	x = 1;
	for (i = 1; i <= m; i++) {
		cin >> a; 
		a--;
		h += i * a;
	}
	cout << m + h;

	return 0;
}
