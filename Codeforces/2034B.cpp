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

string func(string s, int k, int ind){
	if(ind + k + 1 <= s.sz){
		for(int i = ind; i <= ind + k; i++){
			s[i] = '1';
		}
	}
	else{
		for(int i = ind; i < s.sz; i++){
			s[i] = '1';
		}
	}
	
	return s;
}



void solve()
{
	int n, m, k; cin >> n >> m >> k;
	string s; cin >> s;
	
	vector<int> s2;
	int cnt = 0;
	vector<int> ind;
	int res = 0;
	
	for(int i = 0; i < s.sz; i++){
		if(s[i] == '0'){
			cnt++;	
		}
		else{
			cnt = 0;
		}
		if(cnt == m){
			res++;
			cnt = 0;
			i += (k - 1);	

		}
	}
	
	cout << res << endl;
	
	
	 	

}

signed main()
{
       int t;
       t = 1;
       cin >> t;
       while(t--) solve();


       return 0;
}
