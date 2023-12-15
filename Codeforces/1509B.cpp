#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve() {
    int a; cin >> a;
    string s; cin >> s;
    for(int i = 0; i < s.sz; i++){
        for(int j = 0; j < s.sz; j++){
            for(int k = 0; k < s.sz; k++){
                if(i != j && j != k){
                    if(i < j && j < k){
                        if(s[i] == 'T' && s[j] == 'M' && s[k] == 'T'){
                            s.erase(i);
                            s.erase(j);
                            s.erase(k);
                        }
                    }
                }
            }
        }
    }
    if(s.sz){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
