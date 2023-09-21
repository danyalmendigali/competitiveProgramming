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
    vector<int> mx(4);
    int n;
    cin >> n;
    mx[0] = mx[1] = mx[2] = mx[3] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> p[i].F >> p[i].S;
    }

    sort(p + 1, p + 1 + n);

    for(int i = 1; i <= n; i++)
    {
        if(p[i].F < 0 && mx[0] < abs(p[i].F))
        {
            mx[0] = abs(p[i].F);
        }


        if(p[i].F > 0 && mx[1] < abs(p[i].F))
        {
            mx[1] = abs(p[i].F);
        }


        if(p[i].S < 0 && mx[2] < abs(p[i].S))
        {
            mx[2] = abs(p[i].S);
        }


        if(p[i].S > 0 && mx[3] < abs(p[i].S))
        {
            mx[3] = abs(p[i].S);
        }
    }

    cout << mx[0] * 2 + mx[1] * 2 + mx[2] * 2 + mx[3] * 2 << endl;


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
