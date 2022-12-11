#include <iostream>
using namespace std;

int main()
{
	int a, b, c, t;
	cin >> a >> b >> c >> t;
	if(a == t) {
		cout << a * b;
	}
	
	if(a < t) {
       cout << a * b + ((t - a) * c);
	}
	if(a > t) {
		cout << t * b;
	}
	
	
	
	return 0;
}
