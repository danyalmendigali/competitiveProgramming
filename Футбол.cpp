#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int pos = s.find("1111111");
	int pos1 = s.find("0000000");
	
	if(pos + 1 || pos1 + 1) cout << "YES";
	else cout << "NO";	
	
	
	
	return 0;
}
