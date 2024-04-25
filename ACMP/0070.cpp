#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()


void solve() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    if (k > 0) {
        string result = "";
        for (int i = 0; i < k; ++i) {
            result += s;
            if (result.length() > 1023) break;
        }
        if (result.length() > 1023)
            result = result.substr(0, 1023);
        cout << result << endl;
    } else {
        string root = "";
        for (int i = 2; i <= s.length(); ++i) {
            string current = "";
            for (int j = 0; j < i; ++j) {
                current += s[j];
            }
            string temp = current;
            for (int j = 2; j <= abs(k); ++j) {
                temp += current;
            }
            if (temp.length() > 1023) break;
            if (temp == s) {
                root = current;
                break;
            }
        }
        if (root == "") {
            cout << "NO SOLUTION" << endl;
        } else {
            cout << root << endl;
        }
    }
}


signed main()
{
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
