#include <bits/stdc++.h>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(long long i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


int compareSizes(string a, string b) {
    // Преобразуем размеры a и b в их числовые эквиваленты для сравнения
    int sizeA = 0, sizeB = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == 'X') {
            sizeA++;
        } else if (a[i] == 'S') {
            sizeA -= 2;
        } else if (a[i] == 'L') {
            sizeA += 2;
        }
    }

    for (int i = 0; i < b.length(); i++) {
        if (b[i] == 'X') {
            sizeB++;
        } else if (b[i] == 'S') {
            sizeB -= 2;
        } else if (b[i] == 'L') {
            sizeB += 2;
        }
    }

    // Сравниваем числовые эквиваленты
    if (sizeA < sizeB) {
        return -1;
    } else if (sizeA > sizeB) {
        return 1;
    } else {
        return 0;
    }
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        int result = compareSizes(a, b);

        if (result == -1) {
            cout << "<" << endl;
        } else if (result == 1) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    }

    return 0;
}
