#include <iostream>
using namespace std;

int Foo(int a)
{
   a = 1;
}

int Foo2(int &a)
{
	a = 2;
}

int Foo3(int *a)
{
	*a = 3;
}

int main()
{
	int value = 5;
	cout << "value = " << value << endl << endl;
	
	cout << "Foo = " <<  endl;
	Foo(value);
	cout << "value = " << value << endl << endl;
	
	cout << "Foo2 = "  << endl;
	Foo2(value);
	cout << "value = " << value << endl << endl;
	
	cout << "Foo3 = " << endl;
	Foo3(&value);
	cout << "value = " << value << endl << endl;	
		
	
	return 0;
}
