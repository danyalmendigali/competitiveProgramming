#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;

void solve()
{
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    if((a * b) % 2 == 0){
        cout << "equal" << endl;
        return;
    }
    else{
        if((c + d) % 2 == e){
            cout << "black";
            return;
        }
        else{
            cout << "white" << endl;
            return;
        }
    }

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
