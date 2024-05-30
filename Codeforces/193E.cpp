#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll mod = 1e13;


unsigned long long binarySearch(const vector<unsigned long long>& arr, unsigned long long target) {
    unsigned long long left = 0;
    unsigned long long right = arr.size() - 1;

    while (left <= right) {
        unsigned long long mid = left + (right - left) / 2;

        if (arr[mid] == target){
            return mid % mod;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return -1;
}

void solve()
{
    int n; cin >> n;
    vector<unsigned long long> fibonacci;

    fibonacci.push_back(0);
    fibonacci.push_back(1);
    while (true) {
        unsigned long long next = fibonacci[fibonacci.size() - 1] + fibonacci[fibonacci.size() - 2];
        if (next > 10e13){
            break;
        }
        fibonacci.push_back(next);
    }
    cout << binarySearch(fibonacci, n) << endl;



}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;
}
