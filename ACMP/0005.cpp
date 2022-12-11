#include <iostream>
using namespace std;

int main() {
	int a[100], i, n, b[100] = {0}, c[100] = {0}, k = 0, d = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] % 2 == 1) {
			b[i] = a[i];
			k++;
		}
			else {
				c[i] = a[i];
				d++;
			}
		}
		
		for(i = 0; i < n; i++) {
			if(b[i] != 0)
			cout << b[i] << " "; 
		}
			cout << endl; 
		
		for(int i = 0; i < n; i++)
		if(c[i] != 0) cout << c[i] << " ";
		cout << endl;
		
		if(k > d) cout << "NO";
		else cout << "YES";
		
	
	
	
	
	
	
	
	return 0;
}
