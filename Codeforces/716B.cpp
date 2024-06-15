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
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define mendigali ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


string func(string s)
{
       map<char, int> mp;
       for(char i = 'A'; i <= 'Z'; i++){
              mp[i]++;
       }
       for(int i = 0; i < s.sz; i++){
              mp[s[i]]++;
       }

       vector<char> str;
       for(auto i : mp){
              if(i.S == 1){
                     str.pb(i.F);
              }
       }

       int g = 0;
       for(int i = 0; i < s.sz; i++){
              if(s[i] == '?'){
                     s[i] = str[g];
                     g++;
              }
       }

       return s;
}


void Daniyal_Mendigali()
{
       string s; cin >> s;

       map<char, int> mp;
       set<char> st;
       int mx = 0;
       int g = 0;
       int ans = 0;

       for(int r = 0, l = 0; r < s.sz; r++)
       {
              st.insert(s[r]);
              if(s[r] == '?'){
                     ans++;
              }
              g++;
              if(g == 26){
                     if(st.sz + ans - 1 == 26){
                            string res = func(s.substr(l, 26));
                            cout << res << endl;
                            return;
                     }
                     else{
                            if(s[l] != '?'){
                                   st.erase(s[l]);
                            }
                            else{
                                   ans--;
                            }
                            l++;
                            g--;
                     }
              }
       }

       cout << -1 << endl;


}

signed main()
{
       mendigali;
       int t;
       t = 1;
       //cin >> t;
       while(t--) Daniyal_Mendigali();

       return 0;
}
