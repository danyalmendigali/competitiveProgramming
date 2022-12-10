#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    char s;
    int a, b;
	cout << "¬ведите числовое выражени€ со знаком ('+' '-' '*' '/') " << endl ;
    cin >> a >> s >> b;
    if(s == '+') {
    	cout << a + b;
	}
	
	if(s == '-') {
    	cout << a - b;
	}
	
	if(s == '*') {
    	cout << a * b;
	}
	
	if(s == '/') {
    	cout << a / b;
	}
    

	
	
	
	
	
	
	return 0;
}
