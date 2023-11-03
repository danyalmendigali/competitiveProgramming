#include <iostream>
using namespace std;

void solve()
{
    int k;
    cin >> k;

    int num = 1;
    while (k > 0)
    {
        if (num % 3 != 0 && num % 10 != 3)
        {
            k--;
        }
        num++;
    }

    cout << num - 1 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
