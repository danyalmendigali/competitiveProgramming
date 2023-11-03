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

string str = 'ogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogogog'

ll a[N][N];
ll countA = 0;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> dp;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o' && s[i + 1] == 'g' && s[i + 2] == 'o') {
            dp.push_back(i);
            i++;
        }
    }

    int g = 0;

    for(int i = 0; i < s.sz; i++)
        while(i = 1)
        {
            s[i] = s[i + 1] = s[i + 2] = '*';
            g++;
        }
    }

    cout << s << endl;
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
