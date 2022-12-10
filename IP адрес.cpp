#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	char p1, p2, p3;
	cin >> a >> p1 >> b >> p2 >> c >> p3 >> d;
	if(a <= 255   && b <= 255 &&  c <= 255 &&  d <= 255 && p1 == '.' && p2 == '.' && p3 == '.' && a >= 0   && b >= 0 &&  c >= 0 &&  d >= 0) {
		cout << "YES";
	}
	else cout << "NO";
	
	
	
	
	
	return 0;
}
