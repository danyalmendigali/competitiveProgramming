#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	int n;
	cin >> n;
	int matrix[n][n];
	
	for(int i = 0; i < n; i++) { 
		for(int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	
	cout << endl;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(matrix[i][j] == 0) {
				matrix[i][j] = 1; 
			}
			else matrix[i][j] = 0;		
		}
	}
	
	
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	return 0;
}
