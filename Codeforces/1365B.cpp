#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <cmath>
#include <set>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define ers() erase()
#define ins() insert()
#define lw() lower_bound()
#define up() upper_bound()
#define all(dp) dp.begin(), dp.end()

map<int, int> mp1;


bool isSortVector(vector<int>& A)
{
       vector<int> g = A;
       sort(all(g));
       if(g == A) return true;
       else return false;
}

int binpow(int n, int m)
{
       if(m == 0) return 1;
       if(m % 2 == 0)
       {
             int c = binpow(n, m / 2);
             return c * c;
       }
       if(m % 2 == 1){
              return binpow(n, m - 1) * n;
       }
}

bool isBubbleSortVector(vector<int>& a)
{
       int size_vec = a.sz;
       for(int i = 0; i < size_vec - 1; i++){
              int sw = 0;
              for(int j = 0; j < size_vec - i - 1; j++){
                     if(a[j] > a[j + 1]){
                            int temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;

                            sw = 1;
                     }
              }
              if(sw == 0) break;
       }
       if(isSortVector(a)){
              return true;
       }
       else return false;
}


void solve()
{
       int n; cin >> n;
       set<int> st;

       vector<int> a(n), b(n);
       for(int i = 0; i < n; i++) cin >> a[i];
       for(int i = 0; i < n; i++){
              cin >> b[i];
              st.insert(b[i]);
       }
       int g = 0;
       for(pair<int, int> i : mp1){
              g++;
       }
       if(st.sz == 2){
              cout << "Yes" << endl;
              return;
       }
       else{
              if(isSortVector(a)){
                     cout << "Yes" << endl;
                     return;
              }
              else{
                     cout << "No" << endl;
                     return;
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
    cin >> t;
    while(t--) solve();

    return 0;
}
