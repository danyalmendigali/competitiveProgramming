#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите число(количество чисел в массиве): ";
	cin >> n;
	int arr[n]; // создали массив на n элементов
	cout << "¬ведите  массив с " << n << " элементов: " << endl;
	for(int i = 0; i < n; i++) {
		cout << "¬ведите " << i + 1 << " элемент : ";
		cin >> arr[i]; // считываем элементы массива
	} 
	sort(arr, arr + n); // сортируем с помощью функции sort (быстра€ сортировка)
	int key; // создали переменную в которой будет находитьс€ ключ
	cout << "¬ведите ключ: ";
	cin >> key; // считываем ключ
	int l = 0;
	int r = n;
	int mid;
	while(l < r) {
		mid = (l + r) / 2;
		if(arr[mid] > key) r = mid;
		else l = mid + 1;
	}
	
	r--;
	
	if (arr[r] == key) cout << "»ндекс элемента " << key << " в массиве равен: " << r--; 
    else cout << "»звините, но такого элемента в массиве нет";
	
	
	
	
	return 0;
}
