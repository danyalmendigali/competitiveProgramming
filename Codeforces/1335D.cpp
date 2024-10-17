#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

const int size_mtx = 9;

void solve()
{
       vector<vector<char>> a(size_mtx, vector<char>(size_mtx));
       for(int i = 0; i < size_mtx; i++){
              for(int j = 0; j < size_mtx; j++){
                     cin >> a[i][j];
                     if(a[i][j] == '7'){
                            a[i][j] = '8';
                     }
              }
       }

       for(int i = 0; i < size_mtx; i++){
              for(int j = 0; j < size_mtx; j++){
                     cout << a[i][j];
              }
              cout << endl;
       }











}

signed main()
{
    int t = 1;
    cin >> t;
    while(t--) solve();



    return 0;
}
