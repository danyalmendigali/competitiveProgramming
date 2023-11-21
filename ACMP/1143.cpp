#include <bits/stdc++.h>

#define all(a) a.begin(), a.end()
#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define vi vector<int>
#define sz size()

using namespace std;

const int N = 101;

void solve()
{
    int num;
    int dp[N];
    int size = 0;

    while (cin >> num)
    {
        if (num == 0)
            return;

        dp[size++] = num;
    }

    if (size < 3)
    {
        cout << 0 << endl;
        return;
    }

    int res = 0;

    for (int i = 1; i < size - 1; ++i)
    {
        if (dp[i] > dp[i - 1] && dp[i] > dp[i + 1])
        {
            ++res;
        }
    }

    cout << res << endl;
}

int main()
{
    optimus_prime;

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
