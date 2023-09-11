#include <bits/stdc++.h>
#include <algorithm>


#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
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

bool isComposite(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}


void solve()
{
    int n;
    cin >> n;

    for (int i = 4; i < n; i++) {
        if (isComposite(i) && isComposite(n - i)) {
            cout << i << " " << n - i << endl;
            break;
        }
    }


}


signed main()
{
    optimus_prime;


    solve();




    return 0;
}
