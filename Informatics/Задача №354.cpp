#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i + j < n - 1 ) arr[i][j] = 0;
			else if(i + j == n - 1) arr[i][j] = 1;
			else arr[i][j] = 2;
		}
	}
	
	for(int i = 0; i < n; i++) {
	    for(int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	
	
	return 0;
}
