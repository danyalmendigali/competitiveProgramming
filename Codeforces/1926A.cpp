#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cmath>
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
    string s; cin >> s;
    int a = 0, b = 0;
    for(int i = 0; i < s.sz; i++){
        if(s[i] == 'A'){
            a++;

        }
        if(s[i] == 'B'){
            b++;
        }
    }
    if(a > b){
        cout << "A" << endl;
        return;
    }
    else{
        cout << "B" << endl;
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
