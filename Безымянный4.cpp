#include <iostream>
using namespace std;

int main() {
	
	int year;
	cin >> year;
	if ( year % 400 == 0) {
		cout << '12' << "/" << '09'  << "/"<< year;
	}
	if ( year % 4 == 0 || year % 100 != 0) {
			cout << '12' << "/" << '09'  << "/"<< year;
	}
	else {
		cout  << 13 << "/" << 0 << 9 << "/"<< year;
	}
	return 0;	
} 
