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
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
	
	if(s == "green")  {
	 cout << "go";
	 return false;
}
	if(s == "red")  {
     cout << "wait";
     return false;
}
    else {
    	cout << "error";
    	return false;
	}


	
	
	
	
	
	return 0;
}
