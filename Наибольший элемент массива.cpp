#include <iostream>
using namespace std;

int main()
{
	int m[100];
	int n, i , max;
	cin >> n;
	
	for(i < 0; i < n; i++ )
	cin >> m[i];
	
	max = m[0];
	
	for(i = 1; i < n; i++ )
	{
	
	if(max < m[i]) 
		max = m[i];
}



	  cout << max;
	
	
	
	
	return 0;
}
