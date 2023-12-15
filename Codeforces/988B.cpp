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

bool compareBySize(const string& a, const string& b) {
    return a.size() < b.size();
}

void solve() {
    int n, res = 0;
    cin >> n;
    vector<string> dp(n);
    for(int i = 0; i < n; i++){
        cin >> dp[i];
    }
    sort(dp.begin(), dp.end(), compareBySize);
    for(int i = 0; i < dp.sz - 1; i++){
        string str1 = dp[i];
        string str2 = dp[i + 1];
        int found = str2.find(str1);
        if(found != string::npos){
            res++;
        }
    }
    if(res == n - 1){
        cout << "YES" << endl;
        for(int i = 0; i < dp.sz; i++){
            cout << dp[i] << endl;
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
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
