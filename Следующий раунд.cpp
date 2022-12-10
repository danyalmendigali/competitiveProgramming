#include <iostream>
using namespace std;

int main() {
	int n, k, b, d = 0;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		b = arr[k];
		}
		
		
	for(int i = 0; i < n; i++) {
		if(b <= arr[i]) {
			d++;
		}
	}
	

	else cout << d;
		
		
		
	
	
	
	
	
	return 0;
	
}
