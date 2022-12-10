#include <iostream>
using namespace std;

int main()  {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
    if ( x1 > y1 ) {
    	cout << x1 - y1;
	}
	if ( y1 > x1 ) {
		cout << y1 - x1;
	}
    if ( x2 > y2 ) {
		cout << x2 - y2;
	}
	if ( y2 > x2 ) {
		cout << y2 - x2;
	}
	
	
	
	
	
	return 0;
}
