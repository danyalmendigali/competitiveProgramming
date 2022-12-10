#include <iostream>
using namespace std;

int a;

int foo(int a)
{
	a++;
}

int main()
{
	foo(2);
	a++;
   cout << a << endl;
   
   
	
	
	return 0;
}
