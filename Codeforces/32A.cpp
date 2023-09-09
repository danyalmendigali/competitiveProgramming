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


ll a[N][N];
ll countA = 0;

void solve()
{
    int n, d, g = 0;
    cin >> n >> d;

    vector<int> myVector(n);

    for (int i = 0; i < n; i++) {
        cin >> myVector[i];
    }

    for (int i = 0; i < myVector.size(); i++) {
        for (int j = i + 1; j < myVector.size(); j++) {
            if(abs(myVector[i] - myVector[j]) <= d)
            {
                g++;
            }
        }
    }
    cout << g * 2 << endl;


}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
