#include <iostream>
using namespace std;

/* n - кол-во элементов массива
   i - номер элемента массива
   m - массив
   m[i] - элемент массива
   */
int main()
{
	int m[1000];
	int i, n;
	cin >> n;
	for(i = 0; i < n ;i++)
	cin >> m[i];
	for(i = 0; i < n; i++)
	cout << m[i] << ' ';
	
	
	
	
	
	
	return 0;
}
