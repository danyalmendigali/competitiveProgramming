#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {

    int k, count5 = 0, count3 = 0, s = 0;
    cin >> k;

    if(k == 6 || k == 3 || k == 9 || k == 12)
    {
        cout << 0 << " " << k / 3;
        return false;
    }

    while(s < k)
    {
        s += 5;
        count5++;

        if((k - (count5 * 5)) % 3 == 0   &&   (k - (count5 * 5)) % 5 != 0 && (k - (count5 * 5) < 20))
        {
            count3 = (k - (count5 * 5)) / 3;
            s += count3 * 3;
        }
    }

    cout << count5 << " " << count3;







    return 0;
}
