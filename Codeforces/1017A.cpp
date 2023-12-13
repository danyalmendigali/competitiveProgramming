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
#define all(dp) dp.begin(), dp.end()

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


void solve()
{
    int n; cin >> n;
    vector<int> res;
    for(int i = 0; i < n; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;
        res.pb(sum);
    }
    int first = res[0];
    sort(all(res));
    reverse(all(res));
    for(int i = 0; i < res.sz; i++){
        if(res[i] == first){
            cout << i + 1 << endl;
            return;
        }
    }


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
