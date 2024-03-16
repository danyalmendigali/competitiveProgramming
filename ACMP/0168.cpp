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


void solve()
{
    string str = "";
    for(int i = 1; i < 100000; i++){
        str += to_string(i);
    }
    int n; cin >> n;
    string n_str = to_string(n);

    int found = str.find(n_str);
    if (found != string::npos) {
        cout << found + 1 << endl;
    } else {
        cout << "Number not found" << endl;
    }
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
