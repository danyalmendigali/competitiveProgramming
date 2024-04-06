#include <iostream>
#include <string>
#include <vector>
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

int digit(string s)
{
    int k = 0;
    for(char i : s){
        k += i - '0';

    }
    if(k < 10){
        return k;
    }
    return digit(to_string(k));
}

void solve()
{
    string s, s1, s2;
    cin >> s;
    for(int i = 1; i < s.sz; i++){
        s1 = s.substr(0, i);
        s2 = s.substr(i);
        if(digit(s1) == digit(s2)){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;






}

signed main()
{
    int t = 1;
    //cin >> t;
    while(t--) solve();



    return 0;
}
