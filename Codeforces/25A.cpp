#include <iostream>
using namespace std;
 
int main() {
	int n, a = 0, b = 0, inda, indb;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		if(arr[i] % 2 == 0) {
			a++;
			inda = i;
		}
		if(arr[i] % 2 == 1) {
			b++;
			indb = i;
		}
	}
	
	
	for(int i = 0; i < n; i++) {
		if(a == 1) {
			cout << inda + 1;
			return 0;
		}
		
		if(b == 1) {
			cout << indb + 1;
			return 0;
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}
