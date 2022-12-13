#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> s;
		if(s == "Yes" || s == "YES" || s == "yes" || s == "yES" || s == "YeS" || s == "yeS" || s = "yEs" || s == "YEs" ) {
			cout << "YES" << endl;
		}
		
		else cout << "NO" << endl;
	}
	
	
	
	
	
	
	return 0;
}
