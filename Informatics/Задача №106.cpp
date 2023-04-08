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
	string name;
	int words = 0, size;
	cin >> name;
	size = name.size();
	for(int i = 0; i < name.size(); i++) {
		if(name[i] != ' ') {
			words+= 1;
		}
	}
	cout << words;
	
	
	return 0;
}
