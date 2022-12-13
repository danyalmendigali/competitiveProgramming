#include <iostream>
using namespace std;
 
int main() {
    char s;
     int a = 0, b = 0, c = 0, d = 0;
     while(cin>> s) {
         if(s >= 'a' && s <= 'z') a = 1;
         if(s >= 'A' && s <= 'Z') b = 1;
         if(s >= '0' && s <= '9') c = 1;
          
         d++;
    }
          
      
    if(d >= 12 and a == 1 and b == 1 and c == 1) cout << "Yes";
     
    else cout << "No";
  
 
     
     
     
     
    return 0;
}
