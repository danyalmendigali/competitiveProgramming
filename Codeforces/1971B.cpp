#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <set>
#include <map>
#include <numeric>
#include <queue>
#include <cmath>
#include <iomanip>
#include <chrono>
#include <random>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

map<int, int> mp1;
set<char> ch;

void solve()
{
       ch.clear();
       string s; cin >> s;
       string str = s;
       for(int i = 0; i < s.sz; i++){
              ch.insert(s[i]);
       }
       if(ch.sz == 1){
              cout << "NO" << endl;
       }
       else{
             while(next_permutation(s.begin(),s.end())){
                  if(str != s){
                            cout << "YES" << endl;
                            cout << s << endl;
                            return;
                  }
             }
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
