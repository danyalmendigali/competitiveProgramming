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
    vector<vector<char>> color(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> color[i][j];
        }
    }
    vector<vector<int>> table(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> table[i][j];
        }
    }
    int num = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(color[i][j] == 'R'){
                if(table[i][j] >= 4) num++;
            }
            if(color[i][j] == 'G'){
                if(table[i][j] == 2 || table[i][j] == 3 || table[i][j] == 6 || table[i][j] == 7) num++;
            }
            if(color[i][j] == 'B'){
                if(table[i][j] == 1 || table[i][j] == 3 || table[i][j] == 5 || table[i][j] == 7) num++;
            }
            if(color[i][j] == '.'){
                num++;
            }
        }
    }
    if(num == n * m){
            cout << "YES" << endl;
            return;
    }
    cout << "NO" << endl;



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
