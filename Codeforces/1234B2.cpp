#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <list>
#include <unordered_set>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


void solve()
{
       int n, k; cin >> n >> k;
       vector<int> a(n);


       set<int> st;
       list<int> q;

       for(int i = 0; i < n; i++){
              cin >> a[i];
              if(st.find(a[i]) == st.end()){
                     if(q.sz >= k){
                            st.erase(q.back());
                            q.pop_back();
                     }
                     q.push_front(a[i]);
                     st.insert(a[i]);
              }
       }

       cout << q.sz << endl;
       for(int i : q){
              cout << i << " ";
       }
       cout << endl << endl;


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
