#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int a = 0;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '0') {
			a++;
		}
	}
	cout << a;
	
	
	
	
	
	return 0;
}
