#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first

using namespace std;

const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;
const ll N = 101;

map<char, int> mp1, mp2;

bool isPrime(int a)
{
    int res = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0) res++;
    }
    if(res == 2){
        return true;
    }
    else{
        return false;
    }
}


void solve()
{
    int a, b, c;
    int sum = 0;
    cin >> a >> b >> c;
    if(isPrime(a)){
        sum += a;
    }
    if(isPrime(b)){
        sum += b;
    }
    if(isPrime(c)){
        sum += c;
    }
    cout << sum << endl;
    if(isPrime(sum)) cout << "Yes" << endl;
    else cout << "No" << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
