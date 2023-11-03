#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

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
const int day = 7;

ll a[N][N];
ll countA = 0;

map<ll ,ll> mp;

void solve()
{
    mp.clear();
    ll element;
    ll sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> element;
        mp[element]++;
        sum += element;
    }

    ll copy = sum;
    ll mn = sum;
    for(auto &it : mp)
    {
        if(it.S == 2)
        {
            sum = sum - (2 * it.F);
            if(mn > sum) mn = sum;
        }
        else if(it.S >= 3)
        {
            sum = sum - (3 * it.F);
            if(mn > sum) mn = sum;
        }
        sum = copy;
    }

    cout << mn << endl;


}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}
