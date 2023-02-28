#include <iostream>
#include <string>
using namespace std;

string s;
int k = 0, l = 0, p = 0;

int main() {
	
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= '0' && s[i] <= '9')
		k++;
		
		else if(s[i] >= 'a' && s[i] <= 'z')
		l++;
	}
	
	if(k == s.size()) cout << "DIGITS";
	else if(l == s.size()) cout << "LETTERS";
	else cout << "ANOTHER";




	
	
	
	
	return 0;
}
