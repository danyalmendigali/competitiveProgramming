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

string s1 = "qwertyuiopasdfghjklzxcvbnm";
string s2 = "QWERTYUIOPASDFGHJKLZXCVBNM";
string s3 = "0123456789";

void solve()
{
    int n; cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    string str = "";
    for(int i = 0; i < a; i++){
        str += s2[i % s2.sz];
    }
    for(int i = 0; i < b; i++){
        str += s1[i % s1.sz];
    }
    for(int i = 0; i < c; i++){
        str += s3[i % s3.sz];
    }
    cout << str << endl;



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
