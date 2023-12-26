#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define F first
#define S second
#define optimus_prime ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

void solve()
{
    vector<vector<char>> str(8, vector<char>(8));
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> str[i][j];
        }
    }
    for(int i = 0; i < 8; i++){
        int ans = 0;
        for(int j = 0; j < 8; j++){
            if(str[i][j] == 'R'){
                ans++;
            }
        }
        if(ans == 8){
            cout << "R" << endl;
            return;
        }
    }
    cout << "B" << endl;


}

signed main()
{
    optimus_prime;
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();


    return 0;
}
