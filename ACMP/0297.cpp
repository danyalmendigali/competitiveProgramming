#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int c;
	c = 0;
	
	cin >> s;
	for(int i = 0; i <= s.size(); i++) {
		if(s[i] == '0') {
			c++;
		}
		if(s[i] == '6') {
			c++;
		}
		if(s[i] == '8') {
			c += 2;
		}
		if(s[i] == '9') {
			c++;
		}
	}
	cout << c;
	
	
	
	
	
	
	return 0;
}
