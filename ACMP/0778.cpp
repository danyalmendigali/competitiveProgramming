#include <iostream>
using namespace std;

int main() {
	const int n = 31;
	int c = 0;
	int arr[n];
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		c += arr[i];
	}
	
	cout << c / 27;
     
	
	
	
	
	
	
	return 0;
}
