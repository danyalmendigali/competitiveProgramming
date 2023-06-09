#include <iostream>
using namespace std;

#define ll long long
#define ar array

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
