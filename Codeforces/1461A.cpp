#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

void solve()
{
    int a, b, res = 0;
    cin >> a >> b;
    string s;
    int k = 0;
    for(int i = 0; i < b; i++){
        s += 'a';
    }
    for(int i = 0; i < a - b; i++){
            if(res <= a - b){
                s += 'b';
                res++;
            }
            if(res == a - b){
                cout << s << endl;
                return;
            }
            if(res <= a - b){
                s += 'c';
                res++;
            }
            if(res == a - b){
                cout << s << endl;
                return;
            }

            if(res <= a - b){
                s += 'a';
                res++;
            }
            if(res == a - b){
                cout << s << endl;
                return;
            }
    }
    cout << s << endl;




}


signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
