#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "rus");
   char a, b , c ,d ,f , g;
   cout  << "Введите слово из пяти букв";	
   cin >> a >> b >> c >> d >> f >> g;
   cout << "Вы ввели слово : ";
   cout << a << b << c << d << f << g << endl;
	
	return 0;
}
