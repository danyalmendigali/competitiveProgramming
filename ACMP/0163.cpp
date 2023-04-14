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
	  if(s[0] == 'x') {
	  	if(s[1] == '+')
	  	   cout << s[4] - s[2];
	    else 
	       cout << (s[4] - '0') + (s[2] - '0');
	  }
	  
	  
	  if(s[2] == 'x') {
	  	if(s[1] == '+')
	  	   cout << s[4] - s[0];
	    else 
	       cout << s[0] - s[4];	  	
	  }
	  
	  
	  if(s[4] == 'x') {
	  	if(s[1] == '+')
	  	   cout << (s[0] - '0') + (s[2] - '0');
	    else 
	       cout << s[0] - s[2];	  	
	  }
	
	
	
	
	return 0;
}
