#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Привет давай поиграем игру?(Yes/No)" << endl;
	string s;
	cin >> s;
	if(s == "Yes") {
		cout << "Отлично тогда начинем!" << endl;
		Sleep(4000);
		cout << "Сейчас я расскажу правила игры!" << endl;
		Sleep(2000);
		cout << "Сейчас вы назвываете любое число от 1 до 100 и я говорю ваще  число больше или меньше" << endl << "моего которое я загадал. У вас есть 7 попыток если вы не отгадаете то я выйграл  а "  << endl  << "если угадаете я проиграл " << endl;
		Sleep(2000);
		cout << "Вы поняли правило?(Yes/No)" << endl;
		string f;
		cin >> f;
		if(f == "No") {
			cout << "Вы просто должны угадать мое число. У вас есть 7 попыток. Я вам буду говорить ваше число больше или меньше моего." << endl;
			Sleep(2000);
			cout << "Сейчас приступаем! " << endl;
			Sleep(2000);			
			int a = 1 + rand() % 100;
		    cout << "Загадайте любое число:" << endl;;
		    for(int i = 0; i <= 7; i++) {
		    	cout << "Ваша " << i << " попытка: ";
		    	int b;
		    	cin >> b;
		    	if(b == a) {
		    		cout << "Вы угадали число!" << endl;
		    		cout << "Вы большой молодец!" << endl;
		    		return false;
				}
				if(b > a) {
					cout << "Ваше число больше моего" << endl;;
				} 
				if(b < a) {
					cout << "Ваше число меньше моего" << endl;;
				}
				if(i == 7) {
					cout << "Вы проиграли" << endl;;
				}
			}			
		}
		
		if(f == "Yes") {
			cout << "Тогда приступаем к игре!" << endl;;
			Sleep(2000);			
			int a = 1 + rand() % 100;
		    cout << "Загадайте любое число:" << endl;;
		    for(int i = 0; i <= 7; i++) {
		    	cout << "Ваша " << i << " попытка: ";
		    	int b;
		    	cin >> b;
		    	if(b == a) {
		    		cout << "Вы угадали число!" << endl;
		    		cout << "Вы большой молодец!" << endl;
		    		return false;
				}
				if(b > a) {
					cout << "Ваше число больше моего" << endl;;
				} 
				if(b < a) {
					cout << "Ваше число меньше моего" << endl;;
				}
				if(i == 7) {
					cout << "Вы проиграли" << endl;;
				}
			}
		}
		
	}
	if(s == "No") {
		cout << "Извините за беспокойствие!" << endl;;
		return false;
	}
	
	
	
	
	
	return 0;
}
