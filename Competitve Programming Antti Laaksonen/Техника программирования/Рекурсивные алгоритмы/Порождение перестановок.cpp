#include <bits/stdc++.h>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define pb(a) push_back(a)
#define vll vector<long long>
#define p(a) push(a)
#define sz size()
#define ll long long
#define F first
#define S second

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

using namespace std;

void search(vll& permutation, ll n, vector<bool>& chosen)
{
    if(permutation.sz == n)
    {
        // Обработать перестановку
    }
    else
    {
        FOR(i, 1, n)
        {
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.pb(i);
            search(permutation, n, chosen);
            chosen[i] = false;
            permutation.pop_back();

            for(const auto& num : permutation)
            {
                cout << num << " ";
            }
            cout << endl;
            cout << endl;
        }
    }
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    ll n;
    cout << "Введите число: ";
    cin >> n;
    vll permutation;
    vector<bool> chosen(n + 1, false);
    search(permutation, n, chosen);

    return 0;
}
