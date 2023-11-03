#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const int square = 360;

set<int> st;

void solve() {
    int a, b;
    cin >> a >> b;
    vector<int> dp1(a), dp2(a);
    vector<int> ans;
    for(int i = 0; i < a; i++){
        cin >> dp1[i];
    }
    for(int i = 0; i < a; i++){
        cin >> dp2[i];
    }

    sort(all(dp1));
    sort(all(dp2));
    reverse(all(dp2));

    for(int i = 0; i < a; i++)
    {
        ll t = dp1[i] + dp2[i];
        ans.pb(t);
    }
    int res = 0;

    for(int i = 0; i < ans.sz; i++){
        if(ans[i] <= b){
            res++;
        }
    }

    if(res == a){
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;

    }

}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();




    return 0;
}
