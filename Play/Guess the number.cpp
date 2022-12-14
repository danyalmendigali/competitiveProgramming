#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int k;
	string s;
	cout << "Введите свое имя : ";
	cin >> s;
	cout << "Привет " << s << " давай поиграем в игру " << endl;
	k = 1 + rand() % 100;
	cout << k << " ";
	setlocale(LC_ALL, "Russian");
	
	for(int i = 0; i < 7; i++) {
		int a;
		cout << i + 1 << " попытка : ";
 		cin >> a;
		if(a > k) {
			cout << "Задуманное число меньше " << endl;
		}
		if(a < k) {
			cout << "Задуманное число больше " << endl;
		}
		if(a == k) {
			cout << "Вы угадали число! ";
			return 0;
		}
	}
	
	
	
	
	
	
	
	return 0;
}
