#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;

void solve()
{
    double n, m; cin >> n >> m;
    int g = 1;

    while(double(n) < m){
        n *= 1.15;
        g++;
    }
    cout << g << endl;
}

signed main()

{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
