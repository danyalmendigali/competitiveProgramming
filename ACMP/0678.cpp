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
	int n = 1;
	
	for(int i = 0; i < s.size(); i++) {
			if(s[i] == 'A') 
			   if(n == 1)  n = 2;
			   else if(n == 2) n = 1;
			   
			if(s[i] == 'B') 
			   if(n == 2)  n = 3;
			   else if(n == 3) n = 2;
			   			   
			if(s[i] == 'C') 
			   if(n == 1)  n = 3;
			   else if(n == 3) n = 1;		   				
	}
	
	cout << n; 
	
	
	
	return 0;
} 

