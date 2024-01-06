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
    vector<int> res1, res2;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    int k = 0;
    for(int i = 0; i < n; i++){
        int n = 0;
        for(int j = 0; j < m; j++){
            n += matrix[k][j];
        }
        k++;
        res1.pb(n);
    }

    int k1 = 0;
    for(int i = 0; i < m; i++){
        int n2 = 0;
        for(int j = 0; j < n; j++){
            n2 += matrix[j][k1];
        }
        k1++;
        res2.pb(n2);
    }

    for(int i = 0; i < res1.sz; i++){
        cout << res1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < res2.sz; i++){
        cout << res2[i] << " ";
    }
    cout << endl << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
