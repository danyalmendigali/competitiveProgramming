#include <iostream>
using namespace std;

Foo(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int	var1 = 31;
	int var2 = 64;
	cout << "var1\t" << var1 << endl;
    cout << "var2\t" << var2 << endl;
    cout << "Swap" << endl;
    
    Swap(&var1, &var2);
    
    cout << "var1\t" << var1 << endl;
    cout << "var2\t" << var2 << endl;

	return 0;
}
