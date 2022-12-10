#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество элементов в массиве : ";
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cout << "Введите " << i + 1 << " элемент: ";
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	int key;
	cout << "Введите ключ : ";
	cin >> key;
	
	int l = 0;
	int r = n;
	int mid;
	
	while(l < r) {
		mid = (l + r) / 2;
		
		if(arr[mid] > key) r = mid;
		else l = mid + 1;
	}
	
	r--;
	if(arr[r] == key) cout << "Индекс элемента " << key << " в массиве равен: " << r; 
	else cout << "Извините, но такого элемента в массиве нет";
	
	
	
	
	
	return 0;
}
