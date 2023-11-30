#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

// ---

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;

int goodNumber(int n)
{
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n/= 10;
    }
    return sum;
}

void solve()
{
    int n; cin >> n;
    int goodNum = 19;
    while(n > 1){
        goodNum++;
        if(goodNumber(goodNum) == 10){
            n--;
        }
    }
    cout << goodNum << endl;


}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}
