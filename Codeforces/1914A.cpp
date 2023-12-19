#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalutrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0)

using namespace std;

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    sort(s.begin(), s.end());

    int totalTime = 0;
    int solvedProblems = 0;

    for(int i = 0; i < s.sz; i++) {
        int problemTime = s[i] - 'A' + 1;
        totalTime += problemTime;

        if (totalTime <= (i + 1) * (i + 2) / 2) {
            // If the total time is less than or equal to the cumulative time needed to solve problems from 'A' to the current problem,
            // then Monocarp solved the problem
            solvedProblems++;
        }
    }

    cout << solvedProblems << endl;



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();




    return 0;
}
