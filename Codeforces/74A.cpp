#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;


void solve()
{
    int n; cin >> n;
    vector<string> str;
    vector<int> ans;
    while(n--){
        string s;
        int pls, mns, a, b, c, d, e, f;
        cin >> s >> pls >> mns >> a >> b >> c >> d >> e;
        str.push_back(s);
        int g = pls * 100;
        int g2 = mns * 50;
        int res = g - g2;
        int sum = a + b + c + d + e + res;
        ans.push_back(sum);
    }
    int mx = -1e5, ind = 0;
    for(int i = 0; i < ans.sz; i++){
        if(ans[i] >= mx){
            mx = ans[i];
            ind = i;
        }
    }
    cout << str[ind] << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
