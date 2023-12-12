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
    int n;
    cin >> n;
    int res = 0;
    while (n != 1){
        if (n % 6 == 0){
            n /= 6;
        }
        else if (n % 3 == 0){
            n *= 2;
        }
        else{
            res = -1;
            break;
        }

        res++;
    }

    cout << res << endl;

}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}
