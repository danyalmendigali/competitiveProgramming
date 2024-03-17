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


void solve() {
    set<string> st;
    int n, m; cin >> n >> m;
    string s; cin >> s;
    int x = 0;
    int y = 0;
    for(int i = 0; i < s.sz - m + 1; i++){
         string str = "";
         int y = 0;
         for(int j = i; j < m + i; j++){
            str += s[j];
         }
         st.insert(str);
         //cout << str << " ";
         str = "";
    }
    cout << st.sz << endl;

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
