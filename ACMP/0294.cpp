#include <iostream>
using namespace std;

int main() {
	int k1, k2, l1, l2, m1, m2;
	
	cin >> k1 >> l1 >> m1;
	cin >> k2 >> l2 >> m2;
	
	int cl1 = k1 * l1 / 100;
	int cl2 = k2 * l2 / 100;
	
	k1 -= cl1;
	k2 -= cl2;
	
	int s = cl1 * m1 + cl2 * m2;
	if(k1 > k2) s += (k1 - k2) * m1;
	else s += (k2 - k1) * m2;
	
	cout << s;
	
	
	
	
	return 0;
}
