#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)2
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;


void solve()
{
    ll les; cin >> les;
    int sum = 0;
    for(int i = 1; i < les; i++){
        if(i % 2 == 0){
            sum += 15;
        }
        else{
            sum += 5;
        }
    }
    int h = (45 * les) + sum;
    int y = h / 60;
    int r = h % 60;
    cout << 9 + y << " " << r << endl;
}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();




    return 0;
}
