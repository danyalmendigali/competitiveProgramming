#include <iostream>
#include <sstream>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;

int f(int n)
{
	int m = 0;
	while (n)
	{
		n /= 10;
		m++;
	}
	return m;
}

void solve()
{
	int x1, p1, x2, p2;
	cin >> x1 >> p1 >> x2 >> p2;
	int m1 = f(x1), m2 = f(x2);
	if (m1 + p1 == m2 + p2)
	{
		if (m1 < m2)
		{
			while(m1<m2)
			{
				x1 *= 10;
				m1++;
			}
		}
		if (m1 > m2)
		{
			while (m1 > m2)
			{
				x2 *= 10;
				m2++;
			}

		}
		if (x1 > x2)
		{
			cout << ">" << endl;
			return;
		}
		if (x1 == x2)
		{
			cout << "=" << endl;
			return;
		}
		if (x1 < x2)
		{
			cout << "<" << endl;
			return;
		}
	}
	else if (m1 + p1 > m2 + p2)
	{
		cout << ">" << endl;
		return;
	}
	else if (m1 + p1 < m2 + p2)
	{
		cout << "<" << endl;
		return;
	}

}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
