#include <iostream>
using namespace std;

int main() {
	long long n, m, a, sum = 1;
	cin >> n >> m >> a;
	
	if(n > a) {
		sum *= (n + a - 1) / a;
	}
	
	if(m > a) {
		sum *= (m + a - 1) / a;
	}
	
	
	cout << sum;
	
	
	
	
	
	
	
	return 0;
}
