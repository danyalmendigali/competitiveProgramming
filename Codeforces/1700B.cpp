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

bool isPalindrome(const string &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}


void solve()
{
    /*
    ll n, res = 0; cin >> n;
    string s;cin >> s;
    for(int i = 0; i < s.sz; i++){
        if(s[i] - '0' <= 1){
            res++;
        }
    }
    vector<ll> ans, ans2;
    string res_1 = "";
    string res_2 = "";
    if(s[0] - '0' != 9){

                for(ll i = 0; i < s.sz; i++){
            ans2.pb(9 - (s[i] - '0'));
        }
        for(ll i = 0; i < ans2.sz; i++){
            res_2 += ans2[i] + '0';
        }
        cout << res_2 << endl;
    }
    else{
        for(ll i = 0; i < s.sz; i++){
            ans.pb(11 - (s[i] - '0'));
        }
        for(ll i = 0; i < ans.sz; i++){
            res_1 += ans[i] + '0';
        }
        cout << res_1 << endl;
    }
    */
    ll n; cin >> n;
    string s; cin >> s;
    int an = 0;
    for(int i = 0; i < s.sz; i++){
        if(s[i] == '0' || s[i] == '1'){
            an++;
        }
    }
    if(an != 0){
        vector<int> res;
        string str1 = "";
        for(int i = 0; i < s.sz; i++){
            res.pb(9 - (s[i] - '0'));
        }
        for(int i = 0; i < res.sz; i++){
            str1 += (res[i] + '0');
        }
        cout << str1 << endl;
        return;
    }
    else{
        vector<int> res2;
        string str2 = "";
        for(int i = 0; i < s.sz; i++){
            res2.pb(11 - (s[i] - '0'));
        }
        for(int i = 0; i < res2.sz; i++){
            str2 += (res2[i] + '0');
        }
        cout << str2 << endl;
        return;
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
