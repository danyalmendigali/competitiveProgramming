#include <bits/stdc++.h>
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


ll a[N][N];
ll countA = 0;

ll digitSum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

signed main()
{

    optimus_prime;

    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        while(gcd(n, digitSum(n)) <= 1)
        {
           n++;
        }

        cout << n << endl;
    }



    return 0;}
