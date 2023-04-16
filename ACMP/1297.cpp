#include <iostream>
using namespace std;


int main() {
	int l = 0, e = 0, n, m;
	cin >> n >> m;
	for(int i = n; i <= m; i++) {
		if(i == 2 || i == 3) {
			cout << i << endl;
		}
		if(i % 2 == 0 || i % 3 == 0)
		{
			l++;
		}
		else
		{
			cout << i << endl;
			e++;
		}
	}
	
	if(e < 1) {
		cout << "Absent";
	}



	
	
	
	
	
	return 0;
}
