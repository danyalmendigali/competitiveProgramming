#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	cin >> year;
	if (year % 4 == 0  && year % 100 == 0 && year % 400 == 0) {
		cout << "Високосный";
	} 
	else cout  << " Не високосный";
	
	
	
	return 0;
}
