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
#define pb(a) push_back(a)
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
    string s;
    cin >> s;

    vector<char> myChar;
    for(int i = 0; i < s.size(); i++)
    {
        myChar.push_back(s[i]);
    }

    sort(myChar.begin(), myChar.end());

    bool isDiverse = true;
    for (int i = 1; i < myChar.size(); i++) {
        if (myChar[i] == myChar[i - 1] || myChar[i] != myChar[i - 1] + 1) {
            isDiverse = false;
            break;
        }
    }

    cout << (isDiverse ? "Yes" : "No") << endl;
}

signed main()
{

    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();





    return 0;
}
