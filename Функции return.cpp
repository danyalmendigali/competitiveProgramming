#include <iostream>
using namespace std;


// int означает, что функци€ возвращает целочисленное значение обратно в caller
int return7()
{
	
	// Ёта функци€ возвращает целочисленное значение, поэтому мы должны использовать оператор return
	return 7; // возвращаем число 7 обратно в caller;
}

int main()
{
	cout << return7() << endl; // выведетс€ 7
	cout << return7() + 3 << endl; // выведетс€ 10
	
	return7();  // возвращаем число 7
	
	
	
	
	return 0;
}
