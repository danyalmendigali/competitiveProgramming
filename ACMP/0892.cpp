#include <iostream>
using namespace std;

int main() {
	int  n;
	cin >> n;
	
	if (( n == 6)  || ( n == 7 ) || ( n == 8)) cout << "Summer";
	if (( n == 9)  || ( n == 10 ) || ( n ==11)) cout << "Autumn";
	if (( n == 12)  || ( n == 1 ) || ( n == 2)) cout << "Winter";
	if (( n == 3)  || ( n == 4 ) || ( n == 5)) cout << "Spring";
	if ( n > 12) cout << "Error";
	
	return 0;
}
