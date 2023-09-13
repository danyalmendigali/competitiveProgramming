#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
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

vector<int> vec;

void solve()
{
    int n;
    cout << "Введите размер матрицы: ";
    cin >> n;
    cout << "Введите элементы матрицы: ";
    FOR(i, 0, n) cin >> vec[i];

    const auto new_end (remove(begin(vec), end(vec), 2));
    vec.erase(new_end, end(vec));
    for(auto i : vec)
    {
        cout << i << " ";
    }
    cout << "\n";

    const auto odd ([](int i) { return i % 2 != 0; });

    vec.erase(remove_if(begin(vec), end(vec), odd), end(vec));
    vec.shrink_to_fit();

    for(auto i : vec)
    {
        cout << i << " ";
    }
    cout << "\n";


}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    optimus_prime;

    solve();




    return 0;
}
