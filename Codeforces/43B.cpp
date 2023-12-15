#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
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

map<char, int> mp1, mp2;


void solve()
{
    string s, s2;
    int res = 0, ans = 0;
    getline(cin, s);
    getline(cin, s2);
    for(int i = 0; i < s.sz; i++){
        if(s[i] != ' ') mp1[s[i]]++;
    }
    for(int i = 0; i < s2.sz; i++){
        if(s2[i] != ' ') mp2[s2[i]]++;
    }
    for(auto i : mp2){
        ans++;
    }
    for(auto i : mp2){
        for(auto j : mp1){
            if(i.F == j.F && i.S <= j.S){
                res++;
            }
        }
    }
    cout << (res == ans ? "YES" : "NO") << endl;



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
