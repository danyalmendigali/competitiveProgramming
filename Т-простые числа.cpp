#include <iostream>
#include <cmath>
using namespace std;

long long n, x, t;
bool b[1000001];

int main() {
	cin >> n;
	b[1] = b[0] = 1;
	
	for(int i = 2; i < 1000; i++) {
		if(!b[i]);
		
		for(int j = i + i; j < 1000001; j+= i)
		 b[j] = 1;
	}
	
	for(int i = 0; i < n; i++) {
		cin >> x;
		t = sqrt(x);
		
		if(t * t == x && !b[t])
		  cout << "YES" << endl;
		
		 else 
		 cout << "NO" << endl;
		
		
			}

	
	
	
	
	
	
	
	return 0;
}
