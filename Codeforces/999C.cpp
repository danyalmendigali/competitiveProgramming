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

void removeFirstNOccurrences(string& str, char char_to_remove, int n) {
    int count = 0;
    size_t pos = 0;

    while (count < n && (pos = str.find(char_to_remove, pos)) != string::npos) {
        str.erase(pos, 1);
        count++;
    }
}



void solve()
{
       int n, k; cin >> n >> k;
       string s; cin >> s;
       map<char, int> mp1, mp2;
       if(n == k){
              cout << "" << endl;
              return;
       }
       for(int i = 0; i < s.sz; i++){
              mp1[s[i]]++;
       }
       vector<int> a;
       vector<char> str;
       for(pair<char, int> i : mp1){
              a.pb(i.S);
              str.pb(i.F);
       }
       while(k > 0)
       {
              for(int i = 0; i < a.sz; i++){
                     if(a[i] > k){
                            removeFirstNOccurrences(s, str[i], k);
                            cout << s << endl;
                            return;
                     }
                     else{
                            removeFirstNOccurrences(s, str[i], k);
                            k -= a[i];
                     }
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
