#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[4] = {5, 8, 4, 11};
	
	// Выводим значение массива
	cout << "Адрес массива :" << array << "\n";
	
	// Выводим значение нулевого жлемента массива
	cout << "Адрес первого элемента :" << &array[0] << "\n";
	
	
	
	
	return 0;
}
