#include <iostream>
using namespace std;

int main()
{
  int a , b , a1, a2, a3, a4, b1, b2, b3, b4;
 cin >>  a1 >>  a2 >>  a3 >>  a4 >>  b1  >> b2 >> b3 >> b4;
 
      a = a1 + a2 + a3 + a4;
      b = b1 + b2 + b3 + b4;
      
      
      if (a > b) cout << 1;
      else if  (a < b) cout << 2	;
      else cout << "DRAW";
 
	return 0;
}
