#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   int x1, y1, x2, y2, c1, c2, c;
   double s;
   cin >> x1 >> y1 >> x2 >> y2;
    c1 = x1 - x2;
    c2 = y1 - y2;
    c = c1 * c1 + c2 * c2;
    s = sqrt(c);
     cout << setprecision (12) << s;
   
   
   
   
   
   
    
  return 0;
}
