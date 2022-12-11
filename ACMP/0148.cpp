#include <iostream>
using namespace std;

int gcd(int a , int b)
{
	while (b != 0 ) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	int n, m;
	cin >> n >> m;
	cout << gcd(n, m);
	
	
	
	
	
	
	return 0;
}
