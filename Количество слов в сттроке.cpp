#include <iostream>
using namespace std;

int main() {
	string s;
	int a = 1;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == ' ') {
			a++;
		}
	}
	
	
	cout << a;
	
	
	
	
	return 0;
}
