#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string n;
	bool b = true;
	cin >> n;
    for(int i = 1; i < n.size(); i++) {
    	if(n[i] < 'A' || n[i] > 'Z') {
    		b = false;
		}
	}
	
	if(b) {
		for(int i = 1; i < n.size(); i++) {
		n[i] += 32;
	}
		if(n[0] >= 'a' && n[0] <= 'z') n[0] -= 32;
		else n[0] += 32;
	
	}
	
	cout << n;

	
	
	
	
	return 0;
}
