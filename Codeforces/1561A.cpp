#include <bits/stdc++.h>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define sz size()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

using namespace std;


vll v, v1;
ll result;

void solve()
{
    ll n, a, cnt = 0 , cnt1 = 0;
    cin >> n;
    FOR(i, 0, n){
        cin >> a;
        v.pb(a);
        v1.pb(a);
    }
    sort(all(v1));
    while (1){
        FOR(i, 0, v.sz){
            if (v[i] == v1[i]){
                cnt1++;
            }
        }
        if(cnt1 == v.sz){
            break;
        }
        if (cnt % 2 == 0){
            for (int i = 0 ; i < v.sz - 2; i += 2){
                if (v[i] > v[i + 1]){
                    swap(v[i] , v[ i+ 1]);
                }
            }
        }
        else {
            for (int i = 1 ; i < v.size() - 1; i += 2){
                if (v[i] > v[ i+1 ]){
						swap(v[i] , v[i + 1]);
                }
            }
        }
        cnt++;
        cnt1 = 0;
    }
    result = cnt;
    cnt = 0;
    cnt1 = 0;
    v.clear();
    v1.clear();

    cout << result <<endl;

}




signed main()
{
    optimus_prime;

    ll t;
    cin >> t;
    while(t--)
        solve();


    return 0;
}

