#include <iostream>
using namespace std;

int main() {
	char a, b, c, d = 0;
	cin >> a >> b >> c;
	if( isdigit(a) == 1) {
		d++;
	}
	if( isdigit(b) == 1) {
		d++;
	}
	if( isdigit(c) == 1) {
		d++;
	}
	cout << (int)d;

	
	
	
	
	
	
	return 0;
}	
