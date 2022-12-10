#include <iostream>
using namespace std;

 //  &x адрес переменной x

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int x = 0;
	int *p_x = &x;
	*p_x = 1; // теперь значение х = 1
	
	
	
}
