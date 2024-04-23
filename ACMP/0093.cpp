#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

bool isGoodString(string s, string s1)
{
    int a = 0;
    if(s.sz == s1.sz){
        for(int i = 0; i < s.sz; i++){
            if(s[i] != s1[i]){
                a++;
            }
        }
    }
    if(a == 1) return true;
    return false;
}


void solve()
{
    int n; cin >> n;
    vector<string> nameFirst(n);
    for(int i = 0; i < nameFirst.sz; i++){
        cin >> nameFirst[i];
    }
    int m; cin >> m;
    vector<string> nameSecond(m);
    for(int i = 0; i < nameSecond.sz; i++){
        cin >> nameSecond[i];
    }
    for(int i = 0; i < nameFirst.sz; i++){
        int num  = 0;
        for(int j = 0; j < nameSecond.sz; j++){
            if(isGoodString(nameFirst[i], nameSecond[j])) num++;
        }
        cout << num << " ";
    }


}

signed main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
