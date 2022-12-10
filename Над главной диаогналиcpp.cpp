#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			arr[i][j] = rand() % 100;
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i < j) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	
	
	
	
	
	return 0;
}
