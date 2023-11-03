#include <bits/stdc++.h>
#include <windows.h>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;

void solve()
{
    ll m, s;
    cin >> m >> s;
    vector<ll> myVector1(m);
    FOR(i, 0, m)
    {
        cin >> myVector1[i];
    }
    vector<ll> myVector3 {};

    for(int i = 0; i < m; i++)
    {
        myVector3.pb(i);
    }

    vector<ll> myVector2;
    for(int i = 0; i < 50; i++)
    {
        myVector2.pb(i);
    }

    vector<ll> resultVector;
    for (int element : myVector2) {
        if (find(myVector1.begin(), myVector1.end(), element) == myVector1.end()) {
            resultVector.push_back(element);
        }
    }

    myVector2 = resultVector;
    ll sum = 0, f = 0;
    for(int i = 0; i < myVector2.sz; i++)
    {
        sum += myVector2[i];
        if(sum == s)
        {
            f = 1;
        }
    }
    for(int i = 0; i < m; i++)
    {
        myVector3.pb(myVector1[i]);
    }
    sort(all(myVector3));
    myVector3.erase(unique(myVector3.begin(), myVector3.end()), myVector3.end());

    int g = 0;
    for(int i = 1; i < myVector3.size(); i++)
    {
        if(myVector3[i] != myVector3[i + 1])
        {
            g++;
        }
    }
    if(f == 1 && g == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


}

int main()
{
    optimus_prime;

    ll t;
    cin >> t;
    while(t--)
       solve();

    return 0;
}
