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
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll N = 2e5 + 5;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int pos = 0;
	int ind = 0;
	int ans = 0;
	for(int i = 0; i < n - 1; i++){
		if(ind % 2 == 0){
			int num1 = a[pos];
			int num2 = a[pos + 1];
			if(num1 == 1 && num2 == 0){
				pos += 2;
				ans++;
			}
			if(num1 == 0 && num2 == 0){
				pos += 2;
			}
			if(num == 0 && num1 == 1){
				pos += 1;
			}
		}
		else{}
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