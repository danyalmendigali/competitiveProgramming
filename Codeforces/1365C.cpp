#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
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

const ll N = 2e5 + 5;

vector<int> shiftLeft(vector<int> myVector) {
    if (!myVector.empty()) {
        rotate(myVector.begin(), myVector.begin() + 1, myVector.end());
    }


    return myVector;
}


ll vec(const vector<int>& first, const vector<int>& second)
{
       ll cnt = 0;
       for(int i = 0; i < first.sz; i++){
              if(first[i] == second[i]){
                     cnt++;
              }
       }
       return cnt;
}

void solve()
{
       int n; cin >> n;
       vector<int> a(n), b(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < n; i++){
              cin >> b[i];
       }
       ll mx = -1;
       for(int i = 0; i < n; i++){
              b = shiftLeft(b);
              mx = max(mx, vec(a, b));
       }
       cout << mx << endl;

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
