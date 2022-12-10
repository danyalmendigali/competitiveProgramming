#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int a = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == ' ') {
			a++;
		}
	}
	cout << a + 1;
	
	
	
	
	
	
	
	return 0;
}
