#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, sum = 1;
	cout << "¬ведите положительное целое число:";
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
	   sum += 1 ;
}
	cout << "—умма =" << sum << endl;
	
	
	
	
	return 0;
}
