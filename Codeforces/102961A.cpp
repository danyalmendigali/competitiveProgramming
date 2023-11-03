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


void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    FOR(i, 0, n) cin >> vec[i];

    sort(all(vec));
    vec.erase(unique(all(vec)), vec.end());

    cout << vec.sz << endl;




}

signed main()
{
    optimus_prime;

    solve();




    return 0;
}
