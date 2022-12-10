#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, d;
    cin >> n;
    a = n / 1000;
    b = (n % 1000) / 100;
    c = ((n % 1000) % 100) / 10;
    d = (((n % 1000) % 100) % 10);
    if ( a == d || b == c) cout << "YES";
    else cout << "NO";
    
	
	
	
	return 0;
}
