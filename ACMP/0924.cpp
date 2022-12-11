#include <iostream>
#include <string>
using namespace std;
	
int main() {
	const int n = 4;
	string  a[n];
		
	for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - 1; j++) {
			if(a[i][j] == a[i][j + 1] && a[i][j] == a[i+ 1][j] && a[i][j] == a[i+ 1][j + 1]) {
				cout << "No";
				return 0;
				}
			}
		}
		cout << "Yes";
		
		return 0;
	}
