#include <iostream>
using namespace std;

const int BUS = 437;



int main()
{
	int n, m;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> m;
		if(m <= BUS)
		{
			cout << "Crash" << i + 1;
			return 0;
		}
	}
	
	cout << "No crash";
	
	
	return 0;
}
