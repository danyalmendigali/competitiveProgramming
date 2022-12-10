#include <iostream>
using namespace std;
	
template <typename T1, typename T2> 

T2 Sum(T1 a ,T2 b)
{
	return a + b;
}


int main()
{
	setlocale(LC_ALL , "Russian");
	
	cout << Sum(5, 2.1) << endl;
	
	
	
	return 0;
}
