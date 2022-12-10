#include <iostream>
#include <cstdlib>
using namespace std;

int FillArray(  int* const arr, const int size)
{
   
    for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}	
}




int ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;
}

int main()
{
    
	
	
	
	
	
	return 0;
}
