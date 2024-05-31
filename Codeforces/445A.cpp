#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)

void solve(){
       int n, m; cin >> n >> m;
       vector<vector<char>> str(n, vector<char>(m));
       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cin >> str[i][j];
              }
       }
       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     if(str[i][j] == '.')
                     {
                            if((i + j) % 2 == 0){
                                   str[i][j] = 'B';
                            }
                            else{
                                   str[i][j] = 'W';
                            }
                     }
              }
       }
       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cout << str[i][j];
              }
              cout << endl;
       }

       /*
       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     if(str[i][j] == '.'){
                            if(str[i + 1][j] != 'B' && str[i][j + 1] != 'B' && str[i - 1][j] != 'B' && str[i][j - 1] != 'B'){
                                   str[i][j] = 'B';
                            }
                     }
              }
       }

       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     if(str[i][j] == '.'){
                            if(str[i + 1][j] != 'W' && str[i][j + 1] != 'W' && str[i - 1][j] != 'W' & str[i][j - 1] != 'W'){
                                   str[i][j] = 'W';
                            }
                     }
              }
       }

       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cout << str[i][j] << " ";
              }
              cout << endl;
       }
       */


}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();




       return 0;
}
