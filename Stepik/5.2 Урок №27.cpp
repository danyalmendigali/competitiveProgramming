#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
    cin >> s;
     int a = 0;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'a'&& s[i + 1] == 'b' && s[i + 2] == 'c') {
          cout << i + 1 << " ";
          a++;
      }
    }
    
     if(a == 0) {
          cout << "NO";
     }
    
   return 0;
}
