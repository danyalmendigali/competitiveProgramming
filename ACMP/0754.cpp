#include <iostream>
using namespace std;
main()
{
   int a, b, c;
   cin >> a >> b >> c;
   
   if (a >= 94 && a <=727 && b >= 94 && b <= 727 && c >= 94 && c <= 727) {
   
         cout << max(max(a, b), c);
     }
     
     
    else cout <<"Error";
}
