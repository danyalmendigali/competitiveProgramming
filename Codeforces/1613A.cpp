#include <iostream>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll int
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;

void solve()
{
    int x1, p1, x2, p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;

    int xp1, xp2;
    if (p1 == 0)
    {
        xp1 = x1;
    }
    else
    {
        FOR(i, 0, p1)
        {
            x1 *= 10;
        }
    }

    if (p2 == 0)
    {
        xp2 = x2;
    }
    else
    {
        FOR(i, 0, p2)
        {
            x2 *= 10;
        }
    }

    if (x1 > x2)
    {
        cout << ">" << endl;
        return;
    }
    if (x1 < x2)
    {
        cout << "<" << endl;
        return;
    }
    else
    {
        cout << "=" << endl;
        return;
    }
}

int main()
{


    optimus_prime;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
