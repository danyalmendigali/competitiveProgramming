#include <iostream>
using namespace std;

int main()
{
     setlocale(LC_ALL, "Russian");
     
	cout << "Размер char : " << sizeof(char) << " byte" << endl;
	cout << "Размер int : " << sizeof(int) << " byte" << endl;
	cout << "Размер float : " << sizeof(float) << " byte" << endl;
	cout << "Размер double : " << sizeof(double) << " byte" << endl;
	
	
	
	return 0;
}
