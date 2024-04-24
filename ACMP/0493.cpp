#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end();
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(9); cout.tie(0);

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> ship(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ship[i][j];
        }
    }

    int num = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(ship[i][j] == '.'){
                bool valid = true;
                if(i > 0 && ship[i - 1][j] == '*') valid = false;
                if(i < n - 1 && ship[i + 1][j] == '*') valid = false;
                if(j > 0 && ship[i][j - 1] == '*') valid = false;
                if(j < m - 1 && ship[i][j + 1] == '*') valid = false;
                if(valid) num++;
            }
        }
    }
    cout << num << endl;
}

signed main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
