#include <iostream>
using namespace std;

bool isEqual(int x, int y)
{
	return (x == y);
}

int main()
{
	cout << "Enter an integer: ";
	int x;
	cin >> x;
	
	cout << "Enter anoter integer: ";
	int y;
	cin >> y;
	
	if (isEqual(x, y))
	 cout << x << " and " << y << " are equal" << endl;
	 
	 else 
	  cout << x << " and " << y << " are not equal" << endl;
	
	
	return 0;
}
