#include <iostream>
using namespace std;

int main() {
	char s;
	int a = 0, d = 0;
	
	int c;
	cin >> c;
	for(int i = 0; i < c; i++) {
		cin >> s;
		if(s == 'A') {
			a++;
		}
		if(s == 'D') {
			d++;
		}
	}
	if(a > d) {
		cout << "Anton";
		return 0;
	}
	if(a < d) {
		cout << "Danik";
		return 0;
	}
	else cout << "Friendship";
	
	
	
	
	return 0;
}
