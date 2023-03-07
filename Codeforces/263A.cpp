#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int n = 5;
const int f = 2;
int main() {
	int arr[n][n];
	int x, y, s;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];		
			if(arr[i][j] == 1) {
				x = i;
				y = j;				
	  }
     }
   }
	cout << abs(x - f) + abs(y - f);


	
	
	
	
	
	
	
	
	
	return 0;
}
