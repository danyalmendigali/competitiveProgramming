#include <iostream>
using namespace std;
 
int main() {
	int n, a;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(a / 100000 + a % 100000 / 10000 + a % 100000 % 10000 / 1000 ==   a % 100000 % 10000 % 1000 / 100 + a % 100000 % 10000 % 1000 % 100 / 10 + a % 100000 % 10000 % 1000 % 100 % 10 / 1  ) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	
	
	
	
	return 0;
}
