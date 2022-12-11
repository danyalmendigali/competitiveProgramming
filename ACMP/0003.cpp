#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	
	if(a >= 15) {
		a = a / 10;
		b = a + 1;
		a = a * b;
		cout << a << "25";
	}
	
	else {
		a = a * a;
		cout << a;
	}
	
	
	
	
	
	
	return 0;
}
