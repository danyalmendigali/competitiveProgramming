#include <iostream>
using namespace std;

int foo(int a = 5, double b = 0.5)
{
	for(int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}

int main()
{
   foo();
   
	
	return 0;
}
