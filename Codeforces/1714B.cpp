#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a);
#define S second
#define F first
#define daniyaltrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 5;

int dp[N];
set<int> st2;

void solve(){
	st2.clear();
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
            cin >> dp[i];
	}
	for(int i = n; i >= 1; i--){
		if(st2.count(dp[i])) {
			cout << i << endl;
			return;
		}
		st2.insert(dp[i]);
	}
	cout << 0 << endl;
}

signed main()
{
    int t;
    t = 1;
    cin >> t;
    while(t--)
          solve();



    return 0;
}
