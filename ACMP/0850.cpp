#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;

void solve()
{
    int a, b; cin >> a >> b;
    if(max(a, b) % 2 == 1){
        cout << (max(a ,b) / 2) + 1 << " ";
    }
    if(max(a, b) % 2 == 0){
        cout << max(a, b) / 2 << " ";
    }
    cout << min(a, b) << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();





    return 0;
}
