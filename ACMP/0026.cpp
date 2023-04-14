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
    double r1, r2, x1, y1, x2, y2, d;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
     
    d = sqrt((x1 - x2) * (x1 - x2) +(y1 - y2)*(y1 - y2));
     
    if((r1 <= d + r2 ) && (r2 <= d + r1) && (r1 + r2 >= d)) cout << "YES";
    else cout << "NO";
     
     
    return 0;
}
