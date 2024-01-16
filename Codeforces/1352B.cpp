#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define _mendigali_ ios::sync_with_stdio(false);

using namespace std;

void solve()
{
    ll a, b; cin >> a >> b;
    if(a < b){
        cout << "NO" << endl;
        return;
    }
    if(a % 2 == 0 && b % 2 == 0 && a == b){
        ll g = a / b;
        cout << "YES" << endl;
        for(ll i = 0; i < b; i++){
            cout << g << " ";
        }
        cout << endl;
        return;
    }
    if(a % 2 == 0 && b % 2 == 0){
        cout << "YES" << endl;
        cout << a - (b - 1) << " ";
        for(int i = 0; i < b - 1; i++){
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    if(a % 2 == 1 && b % 2 == 1){
        ll f = b - 1;
        cout << "YES" << endl;
        for(ll i = 0; i < f; i++){
            cout << 1 << " ";
        }
        cout << a - f << endl;
        return;
    }
    if(a % 2 == 0 && b % 2 == 1 && a / b >= 2){
            cout << "YES" << endl;
            cout << a - ((b - 1) * 2) << " ";
            for(ll i = 0; i < b - 1; i++){
                cout << 2 << " ";
            }
            cout << endl;
            return;
    }
    else{
        cout << "NO" << endl;
        return;
    }

}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
