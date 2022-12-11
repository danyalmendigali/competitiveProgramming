#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long a, b, s;
	double x;
	cin >> a >> b;
	s = a * b;
	x = sqrt(s);
	if(x == (long long int) x)
	cout << (long long int) x << endl;
	else cout << 0 << endl;
	
	
	
	
	
	
	
	
	return 0;
}
