#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <unordered_map>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalutrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

unordered_map <char, ll> mp;

void solve()
{
    int n; cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    for(int i = 0; i < n; i++){
        int a;
        string s;
        cin >> a >> s;
        for(int j = 0; j < s.sz; j++){
            if(s[j] == 'U'){
                if(dp[i] == 0){
                    dp[i] = 10;
                    dp[i]--;
                }
                else{
                    dp[i]--;
                }
            }
            if(s[j] == 'D'){
                if(dp[i] == 9){
                    dp[i] = -1;
                    dp[i]++;
                }
                else{
                    dp[i]++;
                }
            }
        }
    }
    for(int i = 0; i < dp.sz; i++){
        cout << dp[i] << " ";
    }
    cout << endl;

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
