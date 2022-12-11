#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	if((n == 0) && (m > 0))  cout << "Impossible";
	else if(m == 0) cout << n << " " << n;
	else if(n > m) cout << n << " " << n + m - 1;
	else cout << m << " " << m + n - 1;
	
	
	
	
	
	
	
	return 0;
}
