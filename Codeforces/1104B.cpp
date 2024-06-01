#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

set<string> st;
stack<char> st1;
map<string, int> mp, mp20;

void solve()
{
       string s; cin >> s;
       int cnt = 0;
       for(int i = 0; i < s.sz; i++){
              if(!st1.empty() && st1.top() == s[i]){
                     st1.pop();
                     cnt++;
              }
              else{
                     st1.push(s[i]);
              }
       }

       if(cnt % 2 == 0){
              cout << "No" << endl;
              return;
       }
       cout << "Yes" << endl;



}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
         solve();





    return 0;
}
