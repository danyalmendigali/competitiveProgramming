#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

pair<int, int> p[N];

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 4;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (count == 4)
            {
                if (a[j][i] == 'v')
                {
                    count--;
                    break;
                }
            }
            else if (count == 3)
            {
                if (a[j][i] == 'i')
                {
                    count--;
                    break;
                }
            }
            else if (count == 2)
            {
                if (a[j][i] == 'k')
                {
                    {
                        count--;
                        break;
                    }
                }
            }
            else if (count == 1)
            {
                if (a[j][i] == 'a')
                {
                    count--;
                    break;
                }
            }
        }
    }

    if (count <= 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


}

signed main()
{

    optimus_prime;

    int t;
    cin >> t;
    while(t--)
         solve();





    return 0;
}
