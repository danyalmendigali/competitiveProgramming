#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define ll long long
#define pb(a) push_back(a)
#define sz size()
#define S second
#define F first
#define all(dp) dp.begin(), dp.end()
#define optimus_prime ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

// ---

const ll INF = 1e9 + 9;
const ll MOD = 1e9 + 7;
const ll N = 101;

map<int, int> mp;
set<int> st;

string units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string numToWords(int num) {
    if (num == 0) {
        return "zero";
    } else if (num >= 1 && num <= 9) {
        return units[num];
    } else if (num >= 11 && num <= 19) {
        return teens[num - 10];
    } else if (num % 10 == 0) {
        return tens[num / 10];
    } else {
        return tens[num / 10] + "-" + units[num % 10];
    }
}


void solve()
{
    int s;
    cin >> s;
    cout << numToWords(s) << endl;


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
