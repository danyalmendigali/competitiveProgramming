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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> board(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j];
            }
        }

        int maxSum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int dx = -1; dx <= 1; dx += 2) {
                    for (int dy = -1; dy <= 1; dy += 2) {
                        int x = i;
                        int y = j;
                        int sum = 0;
                        while (x >= 0 && x < n && y >= 0 && y < m) {
                            sum += board[x][y];
                            x += dx;
                            y += dy;
                        }
                        maxSum = max(maxSum, sum);
                    }
                }
            }
        }
        cout << maxSum << endl;




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
