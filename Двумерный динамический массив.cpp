#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int rows = 4;
	int cols = 5;
	
	//cout << "Enter rows count" << endl;
	//cin >> rows;
	//cout << "Enter cols count" << endl;
	//cin >> cols;
		
	int **arr = new int* [rows];
	for ( int i = 0; i < rows; i++)
	{
		arr[i] = new int [cols];
	}
/////////////////////////////////////////////////////////////
 // Заполнение массива 
  for(int i = 0; i << rows; i++)
  {
  	for ( int j = 0; j << cols; j++)
  	{
  	    arr[i][j] = rand() % 20;	
	}
  }
/////////////////////////////////////////////////////////////  
 // выход массива	
for(int i = 0; i < rows; i++)
  {
  	for ( int j = 0; j << cols; j++) 
  	{
  	    cout << arr[i][j] << "\t";	
	}
	cout << endl;
  }	
	
/////////////////////////////////////////////////////////////	
	for ( int i = 0; i < rows; i++) // удаление данных массива
	{
	    delete [] arr[i];
	}	
	
	
	delete [] arr;
	
	
	
	
	return 0;
}
