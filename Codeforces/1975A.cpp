#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

bool ok(const vector<int>& a) {
    vector<int> sort_vec = a;
    sort(all(sort_vec));
    if (a == sort_vec) return true;
    for (int i = 1; i < a.sz; i++) {
        vector<int> rotated_a(a.begin() + i, a.end());
        rotated_a.insert(rotated_a.end(), a.begin(), a.begin() + i);

        if (rotated_a == sort_vec) return true;
    }

    return false;
}

void solve()
{
       int n; cin >> n;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       if(ok(a)){
              cout << "YES" << endl;
       }
       else{
              cout << "NO" << endl;
       }
}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();



       return 0;
}
