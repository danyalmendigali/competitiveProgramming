#include <iostream>
#include <string>
#include <stdio.h> 
using namespace std;

int main()
{
	int *pa = new int;
	*pa = 10;
	cout << *pa << endl;
	delete pa;
	
	pa = NULL;
	
	if( pa != nullptr) 
	{
	   cout << pa << endl;
	}
	delete pa;
 	
	return 0;
}
