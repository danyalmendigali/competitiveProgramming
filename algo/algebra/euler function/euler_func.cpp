#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define mendigalutrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll INF = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

vector<int> res, res2, res3;
set<int> st, st2, st3;
map<int, int> mp1, mp2;
int n, m;

int phi(int val)
{
    int res = val;
    for(int i = 2; i * i <= val; ++i){
        if(val % i == 0){
            while(val % i == 0)
                val /= i;
            res -= res / i;
        }
    }
    if(val > 1) res -= res / val;

    return res;
}

void solve()
{
    cin >> n;
    cout << phi(n) << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();


    return 0;
}
