#include <bits/stdc++.h>
#include <algorithm>


#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define vll vector<long long>
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define ll long long
#define F first
#define S second

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;

void solve() {
    ll n;
    int a = 0;
    cin >> n;
    vll myVector(n);
    FOR(i, 0, n)
    {
        cin >> myVector[i];
    }



    ll low_element = myVector[n - 1];
    ll number = 0;
    for(int i = n - 2; i >= 0; i--)
    {
        if(myVector[i] > low_element)
        {
            number++;
        }
        else
        {
            low_element = myVector[i];
        }
    }

    cout << number << endl;


}


signed main()
{
    optimus_prime;

    ll t;
    cin >> t;
    while(t--)
        solve();




    return 0;
}
