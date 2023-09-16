#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define optimus_prime ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define all(vec) vec.begin(), vec.end()
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll inf = 1e9 + 9;


void solve()
{
    string s;
    cin >> s;

    int rotations = 0;
    char current = 'a';

    for(int i = 0; i < s.sz; i++) {
        int clockwise = (s[i] - current + 26) % 26;
        int counterclockwise = (current - s[i] + 26) % 26;
        rotations += min(clockwise, counterclockwise);
        current = s[i];
    }

    cout << rotations << endl;


}

signed main() {
    optimus_prime;

    solve();




    return 0;
}
