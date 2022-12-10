#include <iostream>
#include <string>
using namespace std;

int main() {
	string h;
	int a;
	int b = 0;
	int s;
	cin >> s;
	for(int i = 0; i < s; i++) {
		cin >> a;
		cin >> h;
		
	for(int j = 0; j < h.size(); j++) {
		if(h[j] == 'T') {
			b++;
		   }
		   
		   if(h[j] == 'i') {
			b++;
		   }
		   
		   if(h[j] == 'm') {
			b++;
		   }
		   
		   if(h[j] == 'u') {
			b++;
		   }
		   
		   if(h[j] == 'r') {
			b++;
		   }
		}
	}
		
	for(int i = 0; i < s; i++) {
		if(a == 5) {
			cout << "YES";
			return 0;
		}
		
		else  {
		cout << "NO";
		return 0;
	}
	}	
		
		
		
	
	
	
	
	
	
	
	
	
	return 0;
}
