#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	for(int i = 0; i < n; i++) {
		cin >> s;
		int n;
		n = s.size();
		if(s.size() > 10) {
			cout << s[0] << s.size() - 2 << s[n - 1] << endl;
		}
		
		else cout << s << endl;
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
