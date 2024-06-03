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
#define F first
#define S second
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()


void solve()
{
       int n; cin >> n;
       vector<int> taxi, woman, pizza;
       vector<string> names;
       for(int i = 0; i < n; i++){
              int g;
              string name;
              cin >> g >> name;
              names.pb(name);

              vector<string> s(g);
              int taxi1 = 0;
              int woman1 = 0;
              int pizza1 = 0;
              for(int j = 0; j < s.sz; j++){
                     cin >> s[j];
                     int h1 = s[j][0] - '0';
                     int h2 = s[j][1] - '0';
                     int h3 = s[j][3] - '0';
                     int h4 = s[j][4] - '0';
                     int h5 = s[j][6] - '0';
                     int h6 = s[j][7] - '0';
                     if(h1 == h2 && h2 == h3 && h3 == h4 && h4 == h5 && h6 == р7){
                            taxi1++;
                     }
                     else if(h1 > h2 && h2 > h3 && h3 > h4 && h4 > h5 && h5 > h6){
                            pizza1++;
                     }
                     else{
                            woman1++;
                     }
              }
              taxi.pb(taxi1);
              woman.pb(woman1);
              pizza.pb(pizza1);
       }
       int mx_taxi = 0, mx_woman = 0, mx_pizza = 0;
       for(int i = 0; i < names.sz; i++){
              mx_taxi = max(mx_taxi, taxi[i]);
              mx_woman = max(mx_woman, woman[i]);
              mx_pizza = max(mx_pizza, pizza[i]);
       }


       vector<string> pos_taxi, pos_woman, pos_pizza;
       for(int i = 0; i < names.sz; i++){
              if(mx_taxi == taxi[i]){
                     pos_taxi.pb(names[i]);
              }
              if(mx_woman == woman[i]){
                     pos_woman.pb(names[i]);
              }
              if(mx_pizza == pizza[i]){
                     pos_pizza.pb(names[i]);
              }
       }

       cout << "If you want to call a taxi, you should call: ";
       for(int i = 0; i < pos_taxi.sz; i++){
              if(i != pos_taxi.sz - 1)
              {
                     cout << pos_taxi[i] << ", ";
              }
              else{
                     cout << pos_taxi[i] << "." << endl;
              }
       }

       cout << "If you want to order a pizza, you should call: ";
       for(int i = 0; i < pos_pizza.sz; i++){
              if(i != pos_pizza.sz - 1)
              {
                     cout << pos_pizza[i] << ", ";
              }
              else{
                     cout << pos_pizza[i] << "." << endl;
              }
       }

       cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
       for(int i = 0; i < pos_woman.sz; i++){
              if(i != pos_woman.sz - 1)
              {
                     cout << pos_woman[i] << ", ";
              }
              else{
                     cout << pos_woman[i] << "." << endl;
              }
       }



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
