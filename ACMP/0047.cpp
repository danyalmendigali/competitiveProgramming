#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


void solve() {
    int n; cin >> n;

    int bestDivisor = 1, bestSum = 1;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            int sum = digitSum(i);
            if (sum > bestSum || (sum == bestSum && i < bestDivisor)) {
                bestSum = sum;
                bestDivisor = i;
            }
        }
    }

    cout << bestDivisor << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
