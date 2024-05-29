#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

ll fibonacci(ll n) {
    const double sqrt5 = sqrt(5.0);
    const double phi = (1.0 + sqrt5) / 2.0;
    return round(pow(phi, n) / sqrt5);
}

ll fibonacciIndex(ll Fn) {
    const double sqrt5 = sqrt(5.0);
    const double phi = (1.0 + sqrt5) / 2.0;
    double index = log(Fn * sqrt5) / log(phi);
    ll roundedIndex = round(index);
    if (fibonacci(roundedIndex) == Fn){
        return roundedIndex;
    }
    else{
        return -1;
    }
}


void solve()
{
      ll Fn; cin >> Fn;
      ll index = fibonacciIndex(Fn);
      cout << index << endl;



}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}
