#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const int SIZE = 10;
    int firstArray[SIZE];
    
    for(int i = 0; i <= SIZE; i++) 
    {
    	firstArray[i] = i + 1;
    	cout << i << " - € €чейка хранит число "  << firstArray[i] << endl;
	}
	
	
	
	
	
	return 0;
}
