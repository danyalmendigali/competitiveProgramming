#include <iostream>
using namespace std;

int main() {
	unsigned long long h, w, n, a, b, mid;
	cin >> w >> h >> n;
	
	a = max(w, h);
	b = min(w, h) * n;
	
	
	while(a < b) {
		mid = (a + b) / 2;
		if(n <= (mid / w) * (mid / h))
		b = mid;
		else 
		a = mid + 1;
	}
	
	cout << a;
	
	
	
	
	return 0;
}
