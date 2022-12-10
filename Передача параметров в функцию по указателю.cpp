#include <iostream>
using namespace std;

int Foo(int *pa)
{
	(*pa) = 555;
}	


int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a = 0;
	cout << a << endl;
	
	Foo(&a);
	
	cout << a << endl;
	
   

	return 0;
}
