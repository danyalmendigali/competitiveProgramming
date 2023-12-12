#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second
#define optimus_prime ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;


void solve()
{
        int n, m;
        cin >> n >> m;
        if (n == 1 && m == 1){
            cout << 0 << endl;
        }
        else if (n == 1 || m == 1){
            cout << 1 << endl;
        }
        else if (n % 2 == 0){
            cout << n / 2 * m << endl;
        }
        else if (m % 2 == 0){
            cout << (n / 2) * m + m / 2 << endl;
        }
        else{
            cout << (n / 2) * m + ceil(m / 2.0) << endl;
        }

}

signed main()
{
    optimus_prime;
    int t;
    //t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}
