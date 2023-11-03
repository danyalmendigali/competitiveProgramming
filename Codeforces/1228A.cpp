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

void solve()
{
    int l, r;
    cin >> l >> r;
    vector<int> dp;
    for(int i = l; i <= r; i++)
    {
        dp.pb(i);
    }
    //for(int i = 0; i < dp.sz; i++)
    {
        //cout << dp[i] << " ";
    }


    for(int i = 0; i < dp.sz; i++)
    {
        string s = to_string(dp[i]);
        set <char> mySet;
        for(char digit : s)
        {
            if(isdigit(digit))
            {
                mySet.insert(digit);
            }
        }
        int newSize = mySet.size();
        if(newSize == s.size())
        {
            cout << s << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
