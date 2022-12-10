#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
    int    a , b , c , d;
	
	cout << "¬ведите первое число :";
     cin >> a;
	
	cout << "¬ведите второе число : ";
	 cin >> b;
	
	cout << "¬ведите третье число : ";
	 cin >> c;
	 
	 d =  ((a + b + c) / 3);
	 
	 cout << "—реднее арифметическое : "  << d << endl;
	
	
	
	return 0;
}
