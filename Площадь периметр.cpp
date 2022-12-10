#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	int a , b , p , s;
	cout << "Введите длинну : ";
	cin >> a;
	
	cout << "Введите ширину  : ";
	cin >> b;
	
	p = a * 2 + b * 2;
	s = a * b;
	cout << " Периметр " <<  p <<  endl;
	
	cout << " Площадь " << s <<  endl;

	
	
	return 0;
}
