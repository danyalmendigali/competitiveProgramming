#include <iostream>
using namespace std;

int main() {
	int n, a, b, index;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];	
	}
	cin >> a >> b;
	a--;
	b--;
	int max = arr[a];
	
	for(int i = a; i <= b; i++) {
		if(arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	
	
	cout << max << " " << index + 1;
 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
