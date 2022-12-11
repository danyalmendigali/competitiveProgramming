#include <iostream>
using namespace std;
 
int main() {
	int n, petya, vasya, tonya, b = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> petya >> vasya >> tonya;
		int sum = 0;
		sum += petya + vasya + tonya;
		if(sum >= 2) {
			b++;
			 
	}
}
	cout << b;
	
	
	
	
	
	return 0;
}
