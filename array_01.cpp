#include <iostream>
using namespace std;

int main()
{
	int array[5]; // массив из пяти чисел
	
	array[0] = 3; // индекс первого элемента - 0 (нулевой элемент)
	array[1] = 2;
	array[2] = 4;
	array[3] = 8;
	array[4] = 12; // индекс последнего элемента - 4 
	
	std::cout << "The array element with the smallest index has the value " << array[0] << "\n";
    std::cout << "The sum of the first 5 numbers is " << array[0] + array[1] + array[2] + array[3] + array[4] << "\n";
	
	
	
	
	
	return 0;
}
