#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    char char_first = s1[0];
    char char_second = s2[0];

    // Проверка, чтобы первые символы были разными
    if(char_first != char_second)
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1 == s2)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        };
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{


    solve();


    return 0;
}
