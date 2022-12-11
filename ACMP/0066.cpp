#include <iostream>
using namespace std;

int main()
{
	string s = "qwertyuiopasdfghjklzxcvbnmq";
	char c;
	cin >> c;
	cout << s[s.find(c) + 1];
	
	
	
	return 0;
}
