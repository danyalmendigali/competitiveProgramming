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
       int a, b, c, d; cin >> a >> b >> c >> d;
       if(c < a && d < b || (d < a) && (c < b)){
              cout << "YES" << endl;
              return;
       }






}

signed main()
{
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
