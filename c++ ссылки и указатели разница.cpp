#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a = 5;
	
	int *pa = &a;
	
	int &aref = a;
	
	int *ppa = &aref;
	
    cout <<"a\t" << a << endl;
    *ppa = 12;
    cout <<"a\t" << a << endl;
	 
	 
	   
	return 0;
}
