#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string s;
	getline(cin, s);
	int a = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == s[s.size() - i - 1]) {
			a++;
		}
	}
	
	
	if(a == s.size() / 2 + 1) {
		cout << "Это строка является палиндромом! ";
	}
	else cout << "Это строка не является палиндромом! ";


	
	
	
	
	return 0;
}
