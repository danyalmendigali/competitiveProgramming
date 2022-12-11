#include <iostream>
using namespace std;

int main()
{
	int a, n, c, d;
	c = 0;
	d = 0;
	cin >> a;
	for(int i = 0; i < a; i++) {
		cin >> n;
		if(n == 0) {
			c++;
		}
		
		if(n == 1) {
			d++;
		}
	}
	
	if(d > c) {
		cout << c;
	}
	if(c > d) {
		cout << d;
	}
	if(c == d) {
		cout << d;
	}
	
	
	
	
	
	
	return 0;
}
