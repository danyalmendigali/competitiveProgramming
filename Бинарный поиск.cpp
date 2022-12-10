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
	
	bool flag = false;
	int l = 0; // лева€ граница
	int r = n - 1; // права€ граница
	int mid;
	
	while((l <= r) && (flag != true)) {
		mid =(l + r) / 2; // считываем срединный индекс отрезка [l,r]
		
		if(arr[mid] == key) flag = true; //провер€ем ключ со серединным элементом
		if(arr[mid] > key) r = mid - 1; // провер€ем, какую часть нужно отбросить
		else l = mid + 1;
	}
	
	if(flag) cout << "»ндекс элемента " << key << " в массиве равен: " << mid;
	else cout << "»звините, но такого элемента нету ";
	
	
	return 0;
}
