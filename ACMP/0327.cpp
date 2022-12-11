#include <iostream>
using namespace std;


bool happy(int n)
{
	int n1, n2, n3, n4, n5, n6;
	n6 = n % 10;
	n5 = n / 10 % 10;	
	n4 = n / 100 % 10;
	n3 = n / 1000 % 10;
	n2 = n / 10000 % 10;
	n1 = n / 100000;
	return(n1 + n2 + n3) == (n4 + n5 + n6);
}


int main() {
   int n, a;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
    	cin >> a;
    	if(happy(a - 1) || happy(a + 1)) cout << "Yes" << endl;
    	else cout << "No" << endl;
	}

	
   
   
	 
	 
	
	
	
	return 0;
}
