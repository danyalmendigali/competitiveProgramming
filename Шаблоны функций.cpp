#include <iostream>
using namespace std;

int Sum(int a , int b, int c)
{
	a++;
    cout << "Test" << endl;
	return a + b + c;
}

int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}

int main()
{
	setlocale(LC_ALL , "Russian")
	cout << Sum(5, 6) << endl;
	
	cout << Sum(4.1, 1.2) << endl;
	
	cout << Sum(5, 6, 3) << endl;
	
	
	return 0;
}
