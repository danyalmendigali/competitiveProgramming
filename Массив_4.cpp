#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int m[100];
	int i, n, sum = 0 ;
	cout << "¬ведите количество элементов массива (1-1000)" << ' ';
	cin >> n;
	while (n > 1000 || n <= 0 ) {
		cout << "¬ведиет число заново";
		cin  >> n;
	}
	for(i = 0; i < n; i++)
	{
		cout << i + 1 << ' ' << "¬ведите элемент массива : ";
		cin >> m[i];
		sum = sum + m[i];
	
	}
	  cout  << "—умма всех чисел массива = "<< sum;
	
	
	
	
	
	return 0;
}
