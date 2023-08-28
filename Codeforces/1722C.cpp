#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    // Словари для подсчета количества повторений каждого слова
    map<string, int> countMap1, countMap2, countMap3;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        countMap1[word]++;
    }
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        countMap2[word]++;
    }
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        countMap3[word]++;
    }

    int a = 0, b = 0, c = 0;

    // Подсчет очков на основе количества повторений слов
    for (const auto &entry : countMap1)
    {
        if (entry.second == 1)
        {
            a += 3;
        }
        else if (entry.second == 2 || entry.second == 3)
        {
            a += entry.second;
        }
    }

    for (const auto &entry : countMap2)
    {
        if (entry.second == 1)
        {
            b += 3;
        }
        else if (entry.second == 2 || entry.second == 3)
        {
            b += entry.second;
        }
    }

    for (const auto &entry : countMap3)
    {
        if (entry.second == 1)
        {
            c += 3;
        }
        else if (entry.second == 2 || entry.second == 3)
        {
            c += entry.second;
        }
    }

    cout << a << " " << b << " " << c << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
