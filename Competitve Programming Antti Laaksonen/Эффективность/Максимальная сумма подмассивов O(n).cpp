#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll INT_MAX = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

ll a[N][N];
ll countA = 0;


// O(n) потому что один вложенный цикла

void solve()
{

    int n;
    cout << "Введите размер вектора: ";
    cin >> n;
    vector<int> array(n);
    cout << "Введите вектор: ";

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }


    int best = 0, sum = 0;
    for(int k = 0; k < n; k++)
    {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }
    cout << best << endl;
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;


    solve();






    return 0;
}
