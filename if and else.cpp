#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: ";
	int a;
	cin >> a;
	
	if(a > 15) 
	{
		cout << "Вы ввели число :" << a << "\n" ;
		cout << a << ">" <<  "15\n";
	}
	

	else 
	{
	   cout << "Вы ввели число : " << a << "\n" ;
	   cout << a << " это число меньше 15\n";	
	}
	
	
	return 0;
}

