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


void solve() {
    int n; cin >> n;
    int total = (n - n / 2 - n / 3 - n / 5 + n / (2 * 3) + n / (2 * 5) + n / (3 * 5) - n / (2 * 3 * 5));

    cout << total << endl;
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
