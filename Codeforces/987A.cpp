#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;


void solve()
{
    int n;
    cin >> n;

    set<string> stones;
    vector<string> missingStones;

    for (int i = 0; i < n; i++) {
        string color;
        cin >> color;
        stones.insert(color);
    }

    if (stones.count("purple") == 0) missingStones.push_back("Power");
    if (stones.count("green") == 0)  missingStones.push_back("Time");
    if (stones.count("blue") == 0) missingStones.push_back("Space");
    if (stones.count("orange") == 0) missingStones.push_back("Soul");
    if (stones.count("red") == 0) missingStones.push_back("Reality");
    if (stones.count("yellow") == 0) missingStones.push_back("Mind");


    int m = missingStones.size();
    cout << m << endl;
    for (int i = 0; i < m; i++) {
        cout << missingStones[i] << endl;
    }


}

signed main()
{

    optimus_prime;

    int t;
    //cin >> t;
    //while(t--)
        solve();





    return 0;
}
