#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

vector<bool> was;
vector<int> res1, res2, comp;
set<int> st1, st2;
map<int, int> mp1, mp2;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    vector<char> str1, str2;
    for(int i = 0; i < s1.sz; i++){
         str1.pb(s1[i]);
    }
    for(int i = 0; i < s2.sz; i++){
         str2.pb(s2[i]);
    }
    sort(all(str1));
    sort(all(str2));
    string s3 = "", s4 = "";
    for(int i = 0; i < str1.sz; i++){
        s3 += str1[i];
    }
    for(int i = 0; i < str2.sz; i++){
        s4 += str2[i];
    }
    int g = 0;
    for(int i = 0; i < s1.sz; i++){
        if(s1[i] != s2[i]){
            g++;
        }
    }
    if(s3 == s4 && g == s1.sz && s1.sz == s2.sz){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
