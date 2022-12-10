#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    int a, b, temp;
     cin >> a >> b;
    cout << "До замены :" << endl;
    cout << " a = " << a << " b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "После замены :" << endl;
    cout << " a = " << a << " b = " << b << endl;
	
	
	return 0;
}
