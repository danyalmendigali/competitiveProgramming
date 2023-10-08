#include <bits/stdc++.h>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<int>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e5 + 5;
const ll inf = 1e9;
const ll INF = 1e9 + 9;
const ll mod = 1e9 + 7;

int x[N];
map<ll, ll> mp;

void solve()
{
    int Q;
    cin >> Q;

    while (Q--) {
        string operation;
        cin >> operation;
        if (operation == "insert") {
            int element;
            cin >> element;
            mp[element]++;
        } else if (operation == "delete") {
            int element;
            cin >> element;
            if (mp.find(element) != mp.end()) {
                mp[element]--;
                if (mp[element] == 0) {
                    mp.erase(element);
                }
            }
        } else if (operation == "count") {
            int element;
            cin >> element;
            cout << mp[element] << endl;
        }
    }

    /*
    3
    insert 5
    insert 7
    count 5
    Это означает, что после выполнения запросов, в map есть один элемент со значением 5.
    */

}


signed main(){
    optimus_prime;

    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();











    return 0;
}
