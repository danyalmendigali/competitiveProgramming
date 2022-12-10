#include <iostream>
using namespace std;

int foo(int a, int b);

	int foo(int a, int b)
{
	cout << "Я функция, меня вызвали!";
} 

int main()
{
	setlocale(LC_ALL, "Russian");
	foo(5, 6); 
	
	
	
	
	
	return 0;
}



