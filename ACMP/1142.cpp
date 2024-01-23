#include <bits/stdc++.h>
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
    int num;
    int increasing_length = 1;
    int decreasing_length = 1;
    int max_length = 1;
    cin >> num;

    while (num != 0) {
        int next_num;
        cin >> next_num;

        if (next_num > num) {
            increasing_length++;
            decreasing_length = 1;
        } else if (next_num < num) {
            decreasing_length++;
            increasing_length = 1;
        }
        else{
            increasing_length = 1;
            decreasing_length = 1;
        }

        max_length = max(max_length, max(increasing_length, decreasing_length));

        num = next_num;
    }

    cout << max_length << endl;
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
