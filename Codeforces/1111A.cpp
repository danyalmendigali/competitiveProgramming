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

bool isGoodNum(char str)
{
    if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
    {
        return true;
    }
    return false;
}


void solve() {
    string s1, s2;
    cin >> s1;
    cin >> s2;

    if(s1.sz != s2.sz)
    {
        cout << "NO" << endl;
        return;
    }




    for(int i = 0; i < s1.sz; i++)
    {
        if(isGoodNum(s1[i]) != isGoodNum(s2[i]))
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;



}

signed main()
{
    optimus_prime;

    solve();





    return 0;
}
