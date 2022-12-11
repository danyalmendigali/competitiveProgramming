#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	long long int  fact = 1;
	cin >> n;
	
	
	for(int i = 1; i <= n; i++) {
		fact *= i;
	}
	
	cout << fact;
	
	
	
	
	return 0;
}
