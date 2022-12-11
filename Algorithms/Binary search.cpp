#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите количество чисел в массива : ";
	cin >> n;
	int arr[n];
	cout << "¬ведите " << n << " чисел" << endl ; 
	for(int i = 0; i < n; i++) {
		cout << "¬ведите " << i + 1 << " элемент : "; 
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	int key;
	cin >> key;
	cout << binary_search(arr, arr + n, key);
	
	
	
	
	
	return 0;
}
