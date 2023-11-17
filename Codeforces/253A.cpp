#include <bits/stdc++.h>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<int>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e5 + 5;
const ll inf = 1e9;
const ll INF = 1e9 + 9;
const ll mod = 1e9 + 7;
const int numPeopleInTaxi = 4;

int x[N];
map<ll, ll> mp;

void solve() {
    int a, b;
    cin >> a >> b;
    int mn = min(a,  b);
    if(a == b)
    {
        a -= mn;
        b -= mn;
        string s = "";
        for(int i = 0; i < mn; i++){
            s += "GB";
        }
        for(int i = 0; i < a; i++){
            s += "B";
        }
        for(int i = 0; i < b; i++){
            s += "G";
        }
        cout << s << endl;
        return;

    }
    if(mn == b)
    {
        a -= mn;
        b -= mn;
        string s = "";
        for(int i = 0; i < mn; i++){
            s += "BG";
        }
        for(int i = 0; i < a; i++){
            s += "B";
        }
        for(int i = 0; i < b; i++){
            s += "G";
        }
        cout << s << endl;
        return;
    }
    if(mn == a)
    {
        a -= mn;
        b -= mn;
        string s = "";
        for(int i = 0; i < mn; i++){
            s += "GB";
        }
        for(int i = 0; i < a; i++){
            s += "B";
        }
        for(int i = 0; i < b; i++){
            s += "G";
        }
        cout << s << endl;
        return;
    }


}

signed main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();




    return 0;
}
