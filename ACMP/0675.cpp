#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<char>> matrix(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    int g = 0;
    vector<int> res;
    while(g != m){
        int ind0 = 0, ind1 = 0;
        for(int i = 0; i < n; i++){
            if(matrix[g][i] == 'A'){
                ind0 = i;
            }
        }
        for(int i = 0; i < n; i++){
            if(matrix[g][i] == 'B'){
                res.pb(ind0 - i);
            }
        }
        g++;
    }
    for(int i = 0; i < res.sz; i++){
        cout << res[i] << " ";
    }
    cout << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
