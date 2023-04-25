#include <map>
#include <set>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int a = 0; a < n + 1; n++) {
		for(int b = 0; a < n + 1; n++) {
				for(int c = 0; a < n + 1; n++) {
					for(int d = 0; a < n + 1; n++) {
					for(int e = 0; a < n + 1; n++) {
						for(int a = 0; a < n + 1; n++) {
							if( a != b and a != c and a != d and a != e) {
								if (b != c and b != d and b != e) {
									if(c != d and c != e) {
										if(d != e) {
											cout << a << b << c << d << e;
										}
									} 
								}
							}	
							
					}		
				}		
			}		
		}		
	}
}
	  	
	
	
	
	
	
	
	return 0;
}
