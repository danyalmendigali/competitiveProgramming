#include <bits/stdc++.h>
#include <algorithm>


#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define fxd(x) fixed << setprecision(x)
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;

void solve() {



        int size_1;
        cin >> size_1;

        int total_ways = 0;

        if (size_1 < 3)
            cout << total_ways << endl;
        else {
            if (size_1 % 2 == 0) {
                total_ways = size_1 / 2 - 1;
                cout << total_ways << endl;
            }
            else {
                total_ways = size_1 / 2;
                cout << total_ways << endl;
            }
        }



}


signed main()
{
    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();




    return 0;
}
