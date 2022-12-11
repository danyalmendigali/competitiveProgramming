#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string s;
	int a, x = 0;
	cin >> a;
	for(int i = 0; i < a; i++) {
		cin >> s;
		if(s[1] == '-') {
			x--;
		}
		if(s[1] == '+') {
			x++;
		}
	}
	cout << x;
	
	
	return 0;
}
