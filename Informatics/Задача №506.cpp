#include <iostream>
using namespace std;

int main() {
	long long int k, n;
	cin >> k >> n;
	
	if(n % k != 0) {
		cout << n / k + 1 << " " << n - ((n / k) * k);
	}
	else cout << n / k << " " << k;
	
	
	
	
	
	
	
	
	return 0;
}
