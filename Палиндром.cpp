#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int a = 0;
	cin >> s;
	for(int i = 0; i < s.size() / 2; i++) {
		 /* cout << s[i] << " " << s[s.size() - 1 - i] << "\n"; */
		if(s[i] == s[s.size() - 1 - i]) {
			a++;
		}
	}
	if(a == s.size() / 2 ) {
		cout << "YES";
	}
	else cout << "NO";
	
	
	
	
	return 0;
}
