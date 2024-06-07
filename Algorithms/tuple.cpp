#include <iostream>
#include <vector>
#include <string>
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
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve()
{
       int n; cin >> n;
       vector<pair<int, int>> a(n);
       set<tuple<int, int, int>> st; // Кортеж
       for(int i = 0; i < n; i++){
              cin >> a[i].F >> a[i].S;
              st.insert(make_tuple(a[i].F, a[i].F, a[i].F * a[i].S)); // Создает tuple из значений элементов
       }

       map<int, int> mp;

       for(auto i : st){
              int pos1, pos2, res;
              tie(pos1, pos2, res) = i; // Распаковывает
              mp[res]++;
       }

       for(auto i : mp){
              cout << i.F << " " << i.S << endl;
       }
       cout << endl;


}

signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
