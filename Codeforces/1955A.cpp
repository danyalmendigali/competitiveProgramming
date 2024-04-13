#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    int n, a, b; cin >> n >> a >> b;
    int baga1 = n * a;
    int baga2 = (n / 2) * b;
    if(n % 2 != 0){
        baga2 += a;
    }
    cout << min(baga1, baga2) << endl;

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();


    return 0;
}
