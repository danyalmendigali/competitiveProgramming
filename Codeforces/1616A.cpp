#include <cctype>
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
#define ins(a) insert(a)
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

ll x[N];

void solve()
{
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int size = sizeof(arr) / sizeof(arr[0]);

        sort(arr, arr + size);

         int maxCount = 0;
         int currentCount = 1;

         for (int i = 1; i < size; ++i) {
             if (arr[i] == arr[i - 1]) {
                 currentCount++;
             } else {
                 if (currentCount > maxCount) {
                     maxCount = currentCount;
                 }
                 currentCount = 1;
             }
         }

    if (currentCount > maxCount) {
        maxCount = currentCount;
    }

    cout <<  maxCount << endl;




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
