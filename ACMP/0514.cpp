#include <iostream>
using namespace std;

int main()
{
	int k, s = 1;
	cin >> k;
	while ( s <= k)
	{
		k -= s;
		s++;
	}
	cout << s - 1 << endl;
	
	
	
	
	
	return 0;
}
