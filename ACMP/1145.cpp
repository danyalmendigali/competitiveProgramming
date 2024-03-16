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
    vector<int> dp;
    int n;
    int sum = 0;
    while(n != 0) {
        cin >> n;
        dp.push_back(n);
        sum += n;
    }
    dp.erase(dp.end() - 1);

    double s = double(sum) / double(dp.size());
    double sum2 = 0.0;
    for (int i = 0; i < dp.size(); i++) {
        sum2 += pow(double(dp[i] - s), 2);
    }

    double res = sqrt(double(sum2) / double(dp.size() - 1));

    cout << double(res) << endl;


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
