#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <cctype>
using namespace std;

void solve()
{
        long long int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (a > b) {
            swap(a, b);
        }

        long long int cat = min(x, b);
        long long int dog = min(y, a);

        if (cat + dog <= c) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

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









