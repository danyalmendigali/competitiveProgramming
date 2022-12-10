#include <iostream>
using namespace std;

int main()  {
	int m1, m2, m3;
	cin >> m1 >> m2 >> m3;
	if ((m1 < 94) || (m1 > 727) || (m2 < 94) || (m2 > 727) || (m2 < 94) || (m2 > 727) ) {
		cout << "Error";
	}
		
	else  {
		cout << max(m1, max( m2 , m3)); 
}
	
	return 0;
}
