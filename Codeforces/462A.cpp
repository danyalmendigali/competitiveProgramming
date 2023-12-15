#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<char, int> mp1, mp2;

bool isPrime(int a)
{
    int res = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0) res++;
    }
    if(res == 2){
        return true;
    }
    else{
        return false;
    }
}


void solve()
{
    int a, b, res = 0;
    cin >> a >> b;
    vector<int> dp(a);
    for(int i = 0; i < a; i++){
        cin >> dp[i];
    }
    sort(dp.begin(), dp.end());
    for(int i = 0; i < a - 1; i++){
        res += dp[i];
    }
    cout << (res <= b ? "YES" : "NO") << endl;


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
