#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s="GCV";
    int i,n;
    char c;
    cin >> s;
    
   if(s.size() != 5 || s[2] != '-'||s[0]<'A'|| s[0] > 'H' || s[3] < 'A' || s[3] > 'H' || s[1] < '1' || s[1] > '8' || s[4] < '1' || s[4] > '8' ) cout << "ERROR";
   else if(abs((s[0] - s[3]) * (s[1] - s[4])) == 2 )cout << "YES";
   else cout << "NO";
   
   
   
   return 0;
}
