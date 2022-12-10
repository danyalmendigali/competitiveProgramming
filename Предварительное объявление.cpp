#include <iostream>
using namespace std;

int add(int x, int y); // предварительное объ€вление функции add() (используетс€ еЄ прототип)

int main()
{
	cout << "The sum of 3 and 4 is :" << add(3, 4) << endl; // это работает, так как мы предварительно (выше функции main()) объ€вили функцию add()
	
	return 0;
}

int add(int x, int y) // хот€ определение функции add() находитс€ ниже еЄ вызова
{
	return x + y;
}
