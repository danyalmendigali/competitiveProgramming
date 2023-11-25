#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <climits>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;


int isLetter(char a, char b, char c){
    int res = 0;
    if(a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z'){
        res++;
    }
    if(b >= 'A' && b <= 'Z' || b >= 'a' && b <= 'z'){
        res++;
    }
    if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
        res++;
    }

    return res;

}

void solve() {
    char a, b, c; cin >> a >> b >> c;
    cout << isLetter(a, b, c) << endl;

}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}
