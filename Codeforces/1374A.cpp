#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;

void solve()
{

    long long x, y, n;
    cin >> x >> y >> n;


    long long k = (n - y) / x * x + y;


    if (k < y) {
        k += x;
    }

    cout << k << "\n";


}

int main() {

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }


    return 0;
}








