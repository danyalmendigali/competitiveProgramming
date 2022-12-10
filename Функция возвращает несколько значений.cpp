#include <iostream>
using namespace std;

int Foo(int *pa, int *pb, int *pc)
{
	(*pa) = 555;
	
	(*pb)++;
	
	(*pc) = -20 ;
	
}	


int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a = 0, b = 0, c = 1;	 
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
	cout << "foo" << endl;
	
	Foo(&a ,&b, &c);
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
	
   

	return 0;
}
