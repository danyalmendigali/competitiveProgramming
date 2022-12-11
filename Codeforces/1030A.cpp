#include <iostream>
using namespace std;
 
int main() {
	int n, a, h = 0, m = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(a == 1) {
			h++;
		}
		if(a == 0) {
			m++;
		}
	}
	if(h >= 1 ) cout << "HARD";
	else cout << "EASY"; 
	
	
	
	
	return 0;
}
