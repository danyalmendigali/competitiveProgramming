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
    int n;
    cin >> n;

    vector<int> d(n);
    for (int i = 1; i <= n; ++i) {
        cin >> d[i];
    }

    vector<int> a(n);
    a[1] = d[1];
    for(int i = 1; i < n; i++) {
		if(a[i - 1] - d[i] != a[i - 1] && a[i - 1] + d[i] != a[i - 1] && a[i - 1] - d[i] >= 0){
			cout << "-1" << endl;
			return;
		}
	}
    for (int i = 1; i < n; ++i) {
        a[i] = a[i - 1] + (d[i] == 0 ? 0 : d[i]);
    }
    bool valid = true;
    for (int i = 1; i < n; ++i) {
        if (d[i] != 0 && a[i] < a[i - 1]) {
            valid = false;
            break;
        }
    }
    if (valid){
        for (int i = 0; i < n; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << "-1" << endl;
    }

}

signed main()
{
    optimus_prime;

    int t;
    t = 1;
    cin >> t;

    while(t--)
         solve();





    return 0;
}
