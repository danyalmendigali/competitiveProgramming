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
    int n;
    cin >> n;
    int a = 0;
    vector<int> myVector(n);
    FOR(i, 0, n) cin >> myVector[i];

    sort(all(myVector));
    myVector.erase(unique(all(myVector)), myVector.end());

    for(int i = 0; i < myVector.sz; i++)
    {
        if(myVector[i] > 0)
        {
            a++;
        }
    }
    cout << a << endl;
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
