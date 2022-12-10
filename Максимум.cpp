#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "¬ведите три числа :";
	cin >> a >> b >> c;
	if ( a > b && a > c) cout << "Max :" << a;
	if ( b > a && b > c) cout << "Max :" << b;
	if ( c > a && c > b) cout << "Max :" << c;
	
	
	
	return 0;
}
