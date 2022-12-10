#include <iostream>
using namespace std;

int add(int a, int b) 
 {
	  return a + b;  
 }
	
int multiply(int c, int d)
 {
	return c * d;
 }

int main()
{
	cout << add(7, 8) << endl; // внутри функции add(): a = 7, b = 8, значит a + b = 15
	cout << multiply(4, 5) << endl; // внутри функции multiply(): c = 4, d = 5, значит c * d = 20
	
	 // Мы можем передавать целые выражения в качестве аргументов
	cout << add(2 + 3, 4 * 4) << endl; // внутри функции add(): a = 5, b = 20, значит a + b = 25
	
	 // Мы можем передавать переменные в качестве аргументов
	x = 4;
	cout << add(x, x) << endl; // будет 4 + 4
	
	cout << add(1, multiply (2, 3)) << endl;  // будет 1 + (2 * 3)
	cout << add(1, add(2, 3)) << endl;  // будет 1 + (2 + 3)
	
	
	return 0;
}
