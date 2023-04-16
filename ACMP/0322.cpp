#include <iostream>
#include <string>
using namespace std;

int main() {
	int p1 = 0, p2 = 1, p3;
	string s;
	cin >> s;
	
	while(p1 + p2 <= s.size())
	{
		p3 = p1 + p2;
		cout << s[p3 - 1];
		p1 = p2;
		p2 = p3;
	}
		
	
	
	
	
	return 0;
}
