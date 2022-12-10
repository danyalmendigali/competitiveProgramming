#include <iostream>
#include <queue>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	queue <int> q;
	cout << "Введите количество чисел в очереди : ";
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int a;
		cout << i + 1 << " число: ";
 		cin >> a;
		q.push(a);
	}
	cout << endl;
	cout << "Первое число: " << q.front() << endl;
     q.pop();
     cout << "Новый первый элемент в очереди : " << q.front() << endl;
	 if(!q.empty()) {
	 	cout << "Очередь не пуста! ";
	 } 
	
	
	return 0;
}
