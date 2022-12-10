#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	for(int i = 0; i < a ; i++) {
		cin >> b;
		if(b > 437) {
			cout << "Crash" << i + 1 << endl;
		}
	}
	else cout << "No crash";
	
	
	
	
	
	return 0;
}
