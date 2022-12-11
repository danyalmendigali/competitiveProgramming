#include <iostream>
using namespace std;

int main()
{
	long long int c, h, o, a, b, d;
	cin >> c >> h >> o;
	a = c / 2;
	b = h / 6;
	d = o / 1;
	cout << min(a, min(b, d));
	
	
	
	
	
	return 0;
}
