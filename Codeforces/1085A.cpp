
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
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

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


ll a[N][N];
ll countA = 0;

void solve()
{
    string t;
    cin >> t;
    int n = t.length();
    string s(n, ' ');  // Создаем строку s такой же длины, как t, и заполняем пробелами

    int left = 0, right = n - 1;
    bool toLeft = true;  // Флаг, чтобы определить, куда добавлять следующий символ

    for (int i = 0; i < n; i++) {
        if (toLeft) {
            s[left] = t[i];
            left++;
        } else {
            s[right] = t[i];
            right--;
        }
        toLeft = !toLeft;  // Меняем направление добавления символа
    }

    cout << s << endl;


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
