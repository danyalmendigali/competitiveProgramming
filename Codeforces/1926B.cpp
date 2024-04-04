#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void solve()
{
    set<string> st;
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
        st.insert(s[i]);
    }
    if(st.sz <= 2){
        cout << "SQUARE" << endl;
        return;
    }
    else{
        cout << "TRIANGLE" << endl;
        return;
    }



}

signed main()
{
    int t = 1;
    cin >> t;
    while(t--) solve();



    return 0;
}
