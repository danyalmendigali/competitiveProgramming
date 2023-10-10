#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

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
const int day = 7;

ll a[N][N];
ll countA = 0;

void solve() {
    string s;
    cin >> s;
    int a = 0;
    for(int i = 0; i < s.sz; i++)
    {
        if(s[i] == 'D' && s[i + 1] == 'a' && s[i + 2] == 'n' && s[i + 3] == 'i' && s[i + 4] == 'l')
        {
            a++;
        }

        if(s[i] == 'O' && s[i + 1] == 'l' && s[i + 2] == 'y' && s[i + 3] == 'a')
        {
            a++;
        }

        if(s[i] == 'S' && s[i + 1] == 'l' && s[i + 2] == 'a' && s[i + 3] == 'v' && s[i + 4] == 'a')
        {
            a++;
        }

        if(s[i] == 'A' && s[i + 1] == 'n' && s[i + 2] == 'n')
        {
            a++;
        }

        if(s[i] == 'N' && s[i + 1] == 'i' && s[i + 2] == 'k' && s[i + 3] == 'i' && s[i + 4] == 't' && s[i + 5] == 'a')
        {
            a++;
        }
    }


    if(a == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}
