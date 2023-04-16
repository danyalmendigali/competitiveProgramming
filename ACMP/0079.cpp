#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int a, b, t;
	cin >> a >> b;
	a %= 10;
	if(a == 0) cout << 0 << endl;
	if(a == 1) cout << 1 <<  endl;
	if(a == 2) {
		t = (b - 1) % 4;
		if(t == 0) cout << 2 << endl;
		if(t == 1) cout << 4 << endl;
		if(t == 2) cout << 8 << endl;
		if(t == 3) cout << 6 << endl;
	}
	
	if(a == 3) {
		t = (b - 1) % 4;
		if(t == 0) cout << 3 << endl;
		if(t == 1) cout << 9 << endl;
		if(t == 2) cout << 7 << endl;
		if(t == 3) cout << 1 << endl;
	}	
	
	if(a == 4) {
		t = (b - 1) % 2;
		if(t == 0) cout << 4 << endl;
		if(t == 1) cout << 6 << endl;
	}	
	
	if (a == 5) cout << 5 << endl;
	if(a == 6) cout << 6 << endl;
	 
	if(a == 7) {
		t = (b - 1) % 4;
		if(t == 0) cout << 7 << endl;
		if(t == 1) cout << 9 << endl;
		if(t == 2) cout << 3 << endl;
		if(t == 3) cout << 1 << endl;
	}	
	
	if(a == 8) {
		t = (b - 1) % 4;
		if(t == 0) cout << 8 << endl;
		if(t == 1) cout << 4 << endl;
		if(t == 2) cout << 2 << endl;
		if(t == 3) cout << 6 << endl;
	}	
	
	if(a == 9) {
		t = (b - 1) % 2;
		if(t == 0) cout << 9 << endl;
		if(t == 1) cout << 1 << endl;
	}	
	
	
	return 0;
}
