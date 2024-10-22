#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;


int mx_int(int n)
{
       int mx = 0;
       for(int i = 3; i <= n; i += 2){
              if(n % i == 0){
                     mx = max(mx, i);
              }
       }

       return mx;
}


void solve()
{
       int n; cin >> n;
       int h = 0;
       int mx = 0;
       if(n == 1){
              cout << "FastestFinger" << endl;
       }
       else{
             if(h % 2 == 0){
                     if(mx_int(n) <= 1){
                            cout << "FastestFinger" << endl;
                            return;
                     }
                     if(mx_int(n) > 1){
                            n = n - mx_int(n);
                     }
                     else{
                            n -= 1;
                     }
                     h++;

             }
            if(h % 2 == 1){
                     if(mx_int(n) <= 1){
                            cout << "Ashishgup" << endl;
                            return;
                     }
                     if(mx_int(n) > 1){
                            n = n - mx_int(n);
                     }
                     else{
                            n -= 1;
                     }
                     h++;
             }
       }

       if(h % 2 == 0){
              cout << "Ashishgup" << endl;
              return;
       }
       else{
              cout << "FastestFinger" << endl;
              return;
       }



}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();




    return 0;
}
