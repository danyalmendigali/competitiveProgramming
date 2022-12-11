#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		
			
	   }
	}
	
	
	
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(arr[i][i] = 1) {
				cout << "YES";
				return 0;
			}
			else  {
				cout << "NO";
				return 0;
			}
		}
	}
	
	
	
	
	
	
	
	return 0;
}
