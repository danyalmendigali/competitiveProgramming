#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int m, n,  a[10][10], mas[10][10];
	cin >> n;
	cin >> m;
	
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			a[i][j] = rand() % 100;
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			mas[i][j] = a[j][i];
		}
	}
	
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
	        cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
	        cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	
	
	
	return 0;
}
