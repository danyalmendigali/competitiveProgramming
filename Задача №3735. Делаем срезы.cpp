#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int a = s.size();
		cout << s[2] << endl;
		cout << s[s.size() - 2] << endl;
		for(int i = 0; i < s.size(); i++) {
			if(i >= 4) {
				cout << s;
			} 
		}
		
	
	
	
	
	
	
	
	return 0;
}
