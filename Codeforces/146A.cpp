#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define pb(a) push_back(a)
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;



void solve()
{
    int n;
    cin >> n;

    string ticket;
    cin >> ticket;

    // Проверяем, является ли номер счастливым
    bool ok = true;
    for (char digit : ticket) {
        if (digit != '4' && digit != '7') {
            ok = false;
            break;
        }
    }

    if (!ok) {
        cout << "NO" << endl;
    } else {
        string firstHalf = ticket.substr(0, n / 2);
        string secondHalf = ticket.substr(n / 2);

        int sumFirstHalf = 0;
        int sumSecondHalf = 0;

        for (char digit : firstHalf) {
            sumFirstHalf += digit - '0';
        }
        for (char digit : secondHalf) {
            sumSecondHalf += digit - '0';
        }

        if (sumFirstHalf == sumSecondHalf) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

signed main()
{

    optimus_prime;

    solve();





    return 0;
}
