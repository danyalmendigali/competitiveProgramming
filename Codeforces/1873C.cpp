#include <cctype>
#include <bits/stdc++.h>
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

const int SIZE = 11;

pair<int, int> p[N];

void solve()
{
    char a[SIZE][SIZE];
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            cin >> a[i][j];
        }
    }

    int k = 0;
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            if(a[i][j] == 'X')
            {
                if(i <= 5)
                {
                    if(j <= 5)
                    {
                        k += min(i, j);
                    }
                    else
                    {
                        k += min(i, 11 - j);
                    }
                }
                else
                {
                    if(j <= 5)
                    {
                        k += min(11 - i, j);
                    }
                    else
                    {
                        k += min(11 - i, 11 - j);
                    }
                }
            }
        }
    }

    cout << k << endl;

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
