#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<int, int> mp;

void solve()
{
    mp.clear();
    vector<int> dp(3);
    for(int i = 0; i < 3; i++){
        cin >> dp[i];
        mp[dp[i]]++;
    }
    for(auto i : mp){

        if(i.F == 1){
            cout << i.S << endl;
        }
    }
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
        solve();



    return 0;
}
