#include <iostream>
#include <cctype> 
using namespace std;

int main() {
	char s, a, b;
	cin >> s;
	if(s >= 'a' && s <= 'z') {
		a = toupper(s);
		cout << a;
	}
	else if(s >= 'A' && s <= 'Z') {
		a = tolower(s);
		cout << a;
	}
	else cout << s;
	
	
	
	
	
	return 0;
}
