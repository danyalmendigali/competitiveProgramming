#include  <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	const int size = 5;
	
	int arr[size]{55,511,2,123,95};
	
	for (int i = 0; i < size; i++)
	{
		 arr[i]  = i;
	}
	
	
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	
	
	
	
	return 0;
}
