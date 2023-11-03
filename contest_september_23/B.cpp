#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
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


void solve()
{
    string q;
    cin >> q;
    int s = 0, h = 0, e = 0, r = 0, g = 0, f = 0;
    for(int i = 0; i < q.size(); i++)
    {
        if(q[i] == 's')
        {
            s++;
        }
        if(q[i] == 'h')
        {
            h++;
        }
        if(q[i] == 'e')
        {
            e++;
        }
        if(q[i] == 'r')
        {
            r++;
        }
        if(q[i] == 'i')
        {
            g++;
        }
        if(q[i] == 'f')
        {
            f++;
        }
    }
     f /= 2;

     int mn = min(s, min(h, min(e, min(r, min(g, f)))));
     cout << mn << endl;


}


signed main()
{

    optimus_prime;

    solve();




    return 0;
}
