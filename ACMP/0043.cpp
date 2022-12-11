#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
	cin >> s;
	s += '1';
	int k = 0, max = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '0') {
			k++;
		}
		else {
			if(k > max) max = k;
			k = 0;
		}
	}	
	
	cout << max;
	
	
	
	return 0;
}
