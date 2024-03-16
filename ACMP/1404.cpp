#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <fstream>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ios ios::sync_with_stdio(false);

using namespace std;

string foo(string s) {
    for (int i = 0; i < s.sz; i++) {
        if (s[i] == 'z') {
            s[i] = 'a';
        } else {
            s[i] += 1;
        }
    }
    return s;
}

void solve()
{
    string s;
    cin >> s;
    cout << foo(s) << endl;

}

signed main()

{
    ios;
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
