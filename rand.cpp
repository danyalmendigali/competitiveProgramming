#include <iostream>
using namespace std;

int foo()
{
	cout << "Я функция меня, вызвали!" << endl;
	
}

double Sum(double a, double b, double c)
{
	return a + b + c;		
}

int main()
{
	setlocale(LC_ALL, "Russian"); 
     
     
     cout << Sum(2.3, 6.2, 1.1);
	
	
	 
	
	return 0;
}

