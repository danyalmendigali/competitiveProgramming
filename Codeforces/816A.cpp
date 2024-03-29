#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define F first
#define S second
#define pb(a) push_back(a)
#define sz size()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 5;

vector<int> res, res2, res3;
vector<bool> used;
set<int> st1, st2;
map<int, int> mp1, mp2;

bool isPalindrome(int num) {
    int res = 0, original = num;
    while (num > 0) {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return original == res;
}

int mn(int h, int m) {
    int res = h * 60 + m;
    int mnnx = 0;

    while (true) {
        res = (res + 1) % (24 * 60);
        mnnx++;
        if (isPalindrome(res))
            break;
    }

    return mnnx;
}

void solve()
{
    int hours, minutes;
    char colon;
    cin >> hours >> colon >> minutes;
    cout << mn(hours, minutes) << endl;
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
