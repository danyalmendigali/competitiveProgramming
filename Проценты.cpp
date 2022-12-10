#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int price;
	int sale;
	float a;
	
	cout << "Введите сумму покупки :";
	cin >> price;
		
	cout << "Вам предоставляется скидка в :  ";
	cin >> sale;
	a = price / 100
	
	cout << a;
	cout << "Сумма с учетом скидки: " << a;
	
	return 0;
}
