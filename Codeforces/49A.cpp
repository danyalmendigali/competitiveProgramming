#include <bits/stdc++.h>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    FOR(i, 0, s.size())
    {
        s[i] = tolower(s[i]);
        if(s[i] == ' ')
        {
            s.erase(i, 1);
            i--;
        }
    }

    char element = s[s.size() - 2];
    cout << (element == 'a' || element == 'e' || element == 'i' || element == 'o' || element == 'u' || element == 'y' ? "YES" : "NO ") << endl;






}


signed main()
{
    optimus_prime;


    solve();




    return 0;
}
