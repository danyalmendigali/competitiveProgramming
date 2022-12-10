#include <iostream>
#include <queue>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int q[7];
	int start = 0, ends = 0;
	cout << "Пользователь, пожалуйста введите 7 чисел: " << endl;
	
	for(int i = 0; i < 7; i++) {
		int a;
		cin >> a;
		q[ends++] = a;
	}
	
	cout << "Самый первый элемент в очереди: " << q[start] << endl;
	start++;
	cout << "Новый первый элемент(после удаления) : " << q[start] << endl;
	cout << "Самый последний элемент в очереди : " << q[ends - 1] << endl;
	if(start != ends) cout << "Очередь заполнена ! ";
	
	
	
	
	
	
	return 0;
}
