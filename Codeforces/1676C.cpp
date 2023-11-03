#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll INT_MAX = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

ll a[N][N];
ll countA = 0;


int minDifference(const string& s1, const string& s2) {
    int diff = 0;
    for (int i = 0; i < s1.length(); i++) {
        int d = abs(s1[i] - s2[i]);
        diff += min(d, 26 - d); // Учитываем переход через конец алфавита
    }
    return diff;
}

signed main()
{

    optimus_prime;

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }

        int minDiff = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = minDifference(words[i], words[j]);
                minDiff = min(minDiff, diff);
            }
        }

        cout << minDiff << endl;
    }





    return 0;
}
