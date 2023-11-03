#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(vec) vec.begin(), vec.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;

    int f = n;

    bool semensTurn = true;
    while (n > 0) {
        int stonesToRemove;
        if (semensTurn) {
            stonesToRemove = gcd(a, f);
            f -= gcd(a, f);
        } else {
            stonesToRemove = gcd(b, f);
            f -= gcd(b, f);
        }

        if (stonesToRemove > f) {
            if (semensTurn) {
                cout << "0" << endl;
            } else {
                cout << "1" << endl;
            }
            break;
        }

        n -= stonesToRemove;
        semensTurn = !semensTurn;
    }


}

signed main() {
    optimus_prime;

    solve();




    return 0;
}
