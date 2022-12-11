#include <iostream>
using namespace std;

int main() {
	int n, b;
	cin >> n;
	int arr[n];
	int sum = 0;	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	
	cout << sum - n + 1;
	
	
	
	return 0;
}
