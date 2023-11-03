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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        string result = ""; // Инициализируем пустую строку для результата

        for (int i = 0; i < n; ++i) {
            char targetChar = s[i]; // Буква, которую хотим получить
            int targetNum = targetChar - 'a' + 1; // Число, соответствующее букве

            // Проверяем, можно ли преобразовать число в букву
            if (a[i] != targetNum) {
                cout << "NO" << endl;
                break;
            }

            // Заменяем все вхождения числа в массиве на текущую букву
            for (int j = 0; j < n; ++j) {
                if (a[j] == a[i]) {
                    a[j] = targetNum;
                }
            }

            result += targetChar; // Добавляем текущую букву к результату
        }

        if (result == s) {
            cout << "YES" << endl;
        }

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
