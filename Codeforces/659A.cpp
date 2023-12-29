#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long9
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;


void solve()
{
    int n, a, b; cin >> n >> a >> b;
    int j = a + b;
    int g;
    if(j == 0){
        cout << n << endl;
        returnl
    }
    if(n == 1){
        cout << n << endl;
        return;
    }
    if(abs(j) > n){
        g = n % abs(j);
        return;
    }
    else{
        g = abs(j);
        return;
    }
    cout << g << endl;

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
