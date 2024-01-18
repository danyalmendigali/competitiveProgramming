#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<bool> was;
vector<int> res1, res2, comp;
set<int> st1, st2;
map<int, int> mp1, mp2;

void sieveOfEratosthenes(int n, vector<bool>& isPrime) {
    isPrime.resize(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve()
{
    int M, N; cin >> M >> N;
    vector<bool> isPrime;
    sieveOfEratosthenes(N, isPrime);

    bool absent = true;
    for (int i = max(2, M); i <= N; ++i) {
        if (isPrime[i]) {
            cout << i << endl;
            absent = false;
        }
    }

    if (absent)  cout << "Absent" << endl;




}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
