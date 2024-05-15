#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

int binSearch(vector<int>& a, int numSearch)
{
              int l = 0, mid = 0, num = 0, h = a.sz - 1;
              while(l <= h){
                     mid = (l + h) / 2;
                     cout << a[mid]
                     num = a[mid];
                     if(num == numSearch) return mid + 1;
                     if(num > numSearch) h = mid - 1;
                     else l = mid + 1;
              }
              return 0;
}


void solve()
{
       int n, num; cin >> n >> num;
       vector<int> a(n);
       for(int i = 0; i < a.sz; i++){
              cin >> a[i];
       }
       cout << binSearch(a, num);





}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();



       return 0;
}
