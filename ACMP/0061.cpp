#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d >> e >> f >> g >>h;
	
	 if (a + c + e + g > b + d + f + h) cout << "1";
	 else if (a + c + e + g < b + d + f + h) cout << "2";
	 else  cout << "DRAW";
	
	
	
	return 0;
}
