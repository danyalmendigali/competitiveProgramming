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

bool isPalindrome(int g, int g2)
{
    int f = g2 / 10;
    int f2 = g2 % 10;
    string s = to_string(f);
    s += to_string(f2);
    if(g == stoi(s)){
        return true;
    }
    else{
        return false;
    }
}

void solve()
{
    string s; cin >> s;
    int res = 0;
    string s2, s3;
    s2 += s[0];
    s2 += s[1];
    s3 += s[3];
    s3 += s[4];
    int g1 = stoi(s2);
    int g2 = stoi(s3);
    if(isPalindrome(g1, g2)){
        cout << 0 << endl;
        return;
    }
    while(!isPalindrome(g1, g2)){
        res++;
        g2++;
        if(g2 >= 60){
            g1++;
            g2 = 0;
        }
        if(g1 >= 24){
            g1 = 0;
            g2 = 0;
        }
    }
    cout << res << endl;
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
