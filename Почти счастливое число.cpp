#include <iostream>
#include <string>
using namespace std;

int main() {
      string s;
      cin >> s;

      for(int i = 0; i < s.size(); i++) {
        if(s[i + 1] == 4 && s[i + 1] == 7) {
            cout << "YES";
            return 0;
        }
        else cout << "NO";
        return 0;


      }








    return 0;
}
