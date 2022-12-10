#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	getline(cin, s);
	for(int i = 0 ; i < n; i++) {
		getline(cin, s);
		if(s.find('rkpt') != -1) {
		
	

	for(auto c : s ) {
		if(c >= '0' && c <=	 '9') {
			cout << c;
		  }
		}
	}
} 
	
	return 0;
}
