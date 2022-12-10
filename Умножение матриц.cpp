#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n][n], arr2[n][n], arr3[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			arr[i][j] = rand() % 10;
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			arr2[i][j] = rand() % 10;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			arr3[i][j] = arr[i][j] * arr2[i][j];
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
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
