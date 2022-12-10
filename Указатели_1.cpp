#include <iostream>
using namespace std;

// Указатели урок 1;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int SizeOfArray = 5000;
	int arrWithDigits[SizeOfArray] = {};
	cout << "Массив занял в памяти " << sizeof(arrWithDigits) << " байт" << endl;
	
	int amount = 0;
	cout << "Сколько чисел вы введёте  в массив?";
	cin >> amount;
	cout << "Реально необходимо " << amount * sizeof(int) << " байт" << endl;
	
	for(int i = 0; i < amount; i++)
	{
		cout << i + 1 << "-е число :";
		cin >> arrWithDigits[i];
	}
	cout << endl;
	
   for(int i = 0; i < amount; i++)
	{
		
	   cout  << arrWithDigits[i] << ' ';
	}
	cout << endl;
	return 0;
}
