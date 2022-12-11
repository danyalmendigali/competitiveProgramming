#include <iostream>
using namespace std;

int main() {
	int n, a = 0;
	cin >> n;
	int arr[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
			
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(arr[i][j] == arr[j][i]) {
				cout << "YES";
				return 0;
			}
			else {
				cout << "NO";
				return 0;
			}
		}
	}
	
	
	
	
	
	return 0;
}
