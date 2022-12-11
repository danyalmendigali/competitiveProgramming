#include <iostream>
using namespace std;

int main() {
	int n, d = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i < n - 1; i++) {
		for(int j = n - 2; j >= i; j--) {
			if(arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				d++;
			}
		}
	}
	
	
	
     cout << d;




    return 0;
}
