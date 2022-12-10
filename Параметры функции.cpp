#include <iostream>
using namespace std;

int Foo(int a)
{
	 return a++; 
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int value = 1;
	
	Foo(value);
	
	cout << a << endl;
	
	
	
	
	
	return 0;
}
