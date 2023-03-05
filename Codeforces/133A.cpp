#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

string s;
int main() {
	cin >> s;
	int pos = s.find_first_of("HQ9");
	if(pos + 1) cout << "YES";
	else cout << "NO";

	
	/*getline(cin , s);
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+') {
			cout << "YES";
			return false;
		}
		else {
			cout << "NO";
			return false;
		}
	}
	*/
	
	
	
	return 0;
}
