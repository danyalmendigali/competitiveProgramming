#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
#include <map>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

using namespace std;


void solve()
{
    map<int, int> mp, mp1, mp2;
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < a; i++){
            int f;
            cin >> f;
            mp[f] = i + 1;
            if(mp2[f] == 0){
                mp2[f] = i + 1;
            }
    }

    for(int i = 0; i < b; i++){
        int r, r1;
        cin >> r >> r1;
        if(mp[r1] && mp2[r] && mp[r1] > mp2[r]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
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
