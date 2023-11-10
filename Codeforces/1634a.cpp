
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

// Обход дерева bfs

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

vector<vector<int>> adj(N);
vector<int> path;

set<int> st;
map<char , ll> mp;
map <char, ll> mp1 , mp2;
vector<ll> v, v1;



void solve()
{
    mp.clear();
	ll a , b; cin >> a >> b;
	string s; cin >> s;
	ll ans = 0;
	string str = s;
	reverse(all(str));
	for (int i = 0; i < a ; i++){
		if (mp[s[i]] == 0){
			ans++;
		}
		mp[s[i]]++;
	}

	if(s == str)
    {
		cout << "1" << endl;
		return;
	}
	else if(ans == 1){
		cout << "1" << endl;
		return;
	}
	else if(b == 0){
		cout << "1" << endl;
		return;
	}
	else{
		cout << "2" << endl;
		return;
	}


}

signed main()
{
    ios;
    int t;
    t = 1;
    cin >> t;
    while(t--)
         solve();




    return 0;
}
