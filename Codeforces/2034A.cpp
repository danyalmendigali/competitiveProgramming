#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define pb2(a, b) push_back({a, b})
#define F first
#define S second
#define all(a) a.begin(), a.end()


void solve()
{
	int a, b; cin >> a >> b;
	int mx = max(a, b);
	for(int i = 1; i < 1000; i++){
		int d = mx * i;
		if(d % a == 0 && d % b == 0){
			cout << d << endl;
			return;
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
