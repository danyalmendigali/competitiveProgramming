#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void Daniyal_Mendigali()
{
       int n, m; cin >> n >> m;
       vector<vector<char>> str(n, vector<char>(m));
       vector<int> cnt(n, 0);
       vector<int> cnt2(m, 0);
       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     cin >> str[i][j];
              }
       }

       for(int i = 0; i < n; i++){
              for(int j = 0; j < m; j++){
                     if(str[i][j] == '#'){
                            cnt[i]++;
                            cnt2[j]++;
                     }
              }
       }

       int mx1 = -1, mx2 = -1;
       int pos1 = -1, pos2 = -1;

       for(int i = 0; i < cnt.sz; i++){
              if(mx1 < cnt[i]){
                     mx1 = cnt[i];
                     pos1 = i + 1;
              }
       }
       for(int i = 0; i < cnt2.sz; i++){
              if(mx2 < cnt2[i]){
                     mx2 = cnt2[i];
                     pos2 = i + 1;
              }
       }
       cout << pos1 << ""

}

signed main()
{
       mendigali;
       int t;
       t = 1;
       //cin >> t;
       while(t--) Daniyal_Mendigali();

       return 0;
}
