#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()


void solve()
{
        int n, m; cin >> n >> m;
        string s(n, 'a');
        for(int i = n - 2; i >= 0; i--){
              if(m <= (n - i - 1)){
                     s[i] = 'b';
                     s[n - m] = 'b';
                     break;
              }
              m -= n - 1 - i; // Находим расстояние с конца строки до текущего символа i
        }

        cout << s << endl;


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
