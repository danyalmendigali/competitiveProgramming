#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int arr[n], brr[n];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		for(int i = 0; i < n; i++) {
			cin >> brr[i];
		}
		
		int A = -1;
		int B = 0;
		for(int i = 0; i < n; i++) {
			if(arr[i] + i <= k) {
				if(brr[i] > B) {
					A = i + 1;
					B = brr[i];
				}
			}
		}
		
		cout << A << endl;	
}
	
	
	
	return 0;
}
