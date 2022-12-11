#include <iostream>
using namespace std;
 
int main() {
	int n, a, b, c;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if(a + b == c || a + c == b || c + b == a) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	
	
	
	
	
	return 0;
}
