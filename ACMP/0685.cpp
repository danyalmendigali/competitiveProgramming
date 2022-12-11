#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	int maxA, minA, maxB, minB, a, b;
	maxA = max(a1, max(a2, a3));
	minA = min(a1, min(a2, a3));
	
	maxB = max(b1, max(b2, b3));
	minB = min(b1, min(b2, b3));
	a = (a1 + a2 + a3) - (maxA + minA);
	b =  (b1 + b2 + b3) - (maxB + minB);
	
	cout << maxA * maxB + minA * minB + a * b; 
	
	

     
     
   	
   	
	return 0;
}
