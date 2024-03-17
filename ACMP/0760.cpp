#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;


void solve() {

    double a, b, c; cin >> a >> b >> c;
    double sum = 0.0;
    for(int i = 0; i < a; i++){
            int g, g1;
            cin >> g >> g1;
            sum += g1;
    }
    double res = double(c) / double(b);
    res *= 60.0;
    cout << fixed << setprecision(2) << res + sum;


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
