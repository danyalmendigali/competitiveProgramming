#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

vector<int> sort(const vector<int>& vec) {
    vector<pair<int, int>> val;
    for (int i = 0; i < vec.sz; ++i) {
        val.emplace_back(vec[i], i);
    }


    sort(all(val));
    vector<int> result(vec.size());

    for (int i = 0; i < val.sz; ++i) {
        int index = val[i].S;
        result[index] = i + 1;
    }

    return result;
}

void Mendigali_Daniyal()
{
       int n; cin >> n;
       vector<int> a(n), b(n);
       vector<int> cop_a, cop_b;
       vector<pair<int, int>> pr;
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              cin >> b[i];
       }

       cop_a = a;
       cop_b = b;
       sort(all(cop_a));
       sort(all(cop_b));
       for(int i = 0; i < n; i++){
              int ans = 0;
              if(a[i] == cop_a[i] && b[i] == cop_b[i]) continue;
              for(int j = i + 1; j < n; j++){
                     if(a[j] == cop_a[i] && b[j] == cop_b[i]){
                            ans++;
                            pr.push_back({i + 1, j + 1});
                            swap(a[i], a[j]);
                            swap(b[i], b[j]);
                     }
              }
              if(ans == 0){
                     cout << -1 << endl;
                     return;
              }
       }
       cout << pr.sz << endl;
       for(auto i : pr){
              cout << i.F << " " << i.S << endl;
       }



}

signed main()
{
       mendigali;
       int t;
       t = 1;
       cin >> t;
       while(t--) Mendigali_Daniyal();

       return 0;
}
