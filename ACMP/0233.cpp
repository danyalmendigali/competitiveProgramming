#include <iostream>
using namespace std;

const int BUS = 437;

int main()
{
	int a, n ;
	cin >> a;
	
	for(int i = 0; i < a; i++) {
		cin >> n;
		
		if(n <=  BUS) {
		    cout << "Crash" << " " <<  i + 1;
		    return 0;
		}
		
	}
       cout << "No crash";
	
	
	
	
	
	return 0;
}
