#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(a) a.begin() , a.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;


void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = a; i >= 0; i--)
    {
        if(a * 2 >= b && a * 4 >= c)
        {
            cout << a + b + c << endl;
            return;
        }
    }


}

signed main() {
    optimus_prime;

    //int t;
    //cin >> t;
    //while(t--)
        solve();



    return 0;
}
