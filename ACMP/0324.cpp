#include <iostream>
using namespace std;


int main() {
		int a, b, c, d, f;
		cin >> a;
		b = a / 1000;
		c = a % 1000 / 100;
		d = a % 1000 % 100 / 10;
		f = a % 1000 % 100 % 10;
		
		if(b == f && c == d) cout << "YES";
		else cout << "NO";
		
		
		return 0;
}
