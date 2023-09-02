#include <bits/stdc++.h>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define sz size()
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll countA = 0;

using namespace std;

void solve() {
    int size_vector, mx, mn;
    cin >> size_vector;

    vector<int> a(size_vector);

    for (int i = 0; i < size_vector; i++) {
        cin >> a[i];
    }

    mx = *max_element(all(a));
    mn = *min_element(all(a));

    vector<bool> exists(mx - mn + 1, false);

    for (int i = 0; i < size_vector; i++) {
        exists[a[i] - mn] = true;
    }

    int f = 0;
    for (int i = 0; i <= mx - mn; i++) {
        if (!exists[i]) {
            f++;
        }
    }

    cout << f << endl;
}


signed main()
{
    optimus_prime;


    solve();




    return 0;
}

