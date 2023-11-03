#include <bits/stdc++.h>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a);
#define ll long long
#define F first
#define S second

const ll N = 1e5 + 9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


using namespace std;

void solve()
{
    int size_vector;
    cin >> size_vector;

    vector<int> myVector(size_vector);
    for(int i = 0; i < size_vector; i++)
    {
        cin >> myVector[i];
    }

    sort(all(myVector));
    myVector.erase(unique(all(myVector)), myVector.end());

    FOR(i, 0, myVector.size() - 1)
    {
        if(myVector[i] + 1 == myVector[i + 1])
        {
            myVector.erase(myVector.begin());
            i--;
        }
    }

    if(myVector.size() == 1)
        cout << "YES" << endl;


    else
        cout << "NO" << endl;





}


signed main()
{
    optimus_prime;

    int t;
    cin >> t;
    while(t--)
        solve();




    return 0;
}
