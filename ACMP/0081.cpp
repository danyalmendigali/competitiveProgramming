#include <iostream>
using namespace std;

int main() {
	 int n, a, min, max;
	 cin >> n; 
	 cin >> a;
	 min = max = a;
	 for (int i = 1 ; i < n; i++)
	 {
	 	cin >> a;
	 	if(a > max) max = a;
	 	if(a < min) min = a;
	 }
	 
	 cout << min << " " << max;
	 
	 
	return 0;
}
