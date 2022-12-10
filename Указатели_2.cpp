#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int value = 5;
	int *ptr = &value; // инициализируем ptr адресом значения переменной
	
	cout << &value << "\n"; // выводим адрес значения переменной value
	cout << ptr << "\n"; // выводим адрес, который хранит ptr
	
	
	
	return 0;
}
