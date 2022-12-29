#include <iostream>
using namespace std;

int main() {
	int n,a, b;
	cin >> n >>  a >> b;
	if(a > b) swap(a, b);
	int way1 = b - a - 1;
	int way2 = n - b + a - 1;
	cout << min(way1, way2);
	
	
	
	
	
	return 0;
}
