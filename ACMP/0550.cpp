#include <iostream>
using namespace std;

int main() {
	
  int n;
  cin >> n;
  if ((n % 400 == 0) || (n % 4 ==0) && (n % 100 != 0 )) cout << "12/09/";
  else {
  	cout << "13/09/";
  }
	if (n < 10) cout << 0;
	if (n < 100) cout << 0;
	if (n < 1000) cout << 0;
	cout << n;
	
	return 0;	
}
