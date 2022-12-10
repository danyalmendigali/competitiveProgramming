#include <iostream>
using namespace std;

int main() {
	int n, m, c, m1 = 0, c1 = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> m >> c;
		
		if(m > c) {
			m1++;
		}
		if(m == c) {
			c1++;
			m1++;
		}
		if(m < c) {
			c1++;
		}
	}
	
	if(m1 == c1) {
		cout << "Friendship is magic!^^";
	}
	if(m1 > c1) {
		cout << "Mishka";
	}
	
	if(c1 > m1) {
		cout << "Chris";
	}
	
	
	
	return 0;
}
