#include <iostream>
#include <string>
using namespace std;

int main() {
	
     string s;
     cin >> s;
     int a = 0;
     
     
     for(int i = 0; i < s.size(); i++) {
     	if(s[i] == '0') {
     	     a++;
		 }
  }
  
  
  if(a == 0) cout << "YES";
   else cout << "NO";
  
  
  
  
    return 0;   
 }
