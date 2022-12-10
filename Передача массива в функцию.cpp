#include <iostream>
#include <cstdlib>
using namespace std;

int FillArray(int arr[], const int size)
{
	int a = sizeof (arr);
	for( int i = 0; i < size; i++)
	{
		arr[i]= rand() % 10;
	}
}

int PrintArray(int arr[], const int size)
{
	for( int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
 	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const int SIZE = 10;
	int arr[SIZE];
	
	int a = sizeof (arr);
	
	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);
	
	
	
	
	return 0;
}
