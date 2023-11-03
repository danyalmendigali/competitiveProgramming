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
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll countA = 0;

bool isBerlandWord(const string& s) {

    for (int i = 0; i < s.size(); i++) {
        char currentChar = s[i];
        if (currentChar == 'n') {
        } else if (currentChar != 'a' && currentChar != 'o' && currentChar != 'u' && currentChar != 'i' && currentChar != 'e') {
            if (i == s.sz - 1 || (i + 1 < s.sz && (s[i + 1] != 'a' && s[i + 1] != 'o' && s[i + 1] != 'u' && s[i + 1] != 'i' &&  s[i + 1] != 'e'))) {
                return false;
            }
        }
    }

    return true;
}



void solve() {
    string s;
    cin >> s;

    if (isBerlandWord(s))
    {
        cout << "YES" << endl;
        return;
    }

    else
    {
        cout << "NO" << endl;
        return;
    }


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
