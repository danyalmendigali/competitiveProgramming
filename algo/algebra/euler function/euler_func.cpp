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

int phi(int n)
{
       int res = n;
       for(int i = 2; i * i <= n; i++){
              if(n % i == 0){
                     while(n % i == 0) n /= if;
                     res -= res / i;
              }
       }
       if(n > 1){
              res -= res / n;
       }

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
