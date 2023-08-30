#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count_a = 0; // Количество букв 'a' на нечетных позициях
    int count_b = 0; // Количество букв 'b' на нечетных позициях
    int operations = 0; // Количество операций для изменения строки

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) // Нечетная позиция
        {
            if (s[i] == 'a')
                count_a++;
            else
                count_b++;
        }
        else // Четная позиция
        {
            if (s[i] == 'a')
                operations += count_b; // Заменяем 'a' на 'b'
            else
                operations += count_a; // Заменяем 'b' на 'a'
        }
    }

    cout << operations << endl;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) // Нечетная позиция
        {
            if (count_a > count_b)
                cout << 'a';
            else
                cout << 'b';
        }
        else // Четная позиция
        {
            if (s[i] == 'a' && count_b > 0)
            {
                cout << 'b';
                count_b--;
            }
            else if (s[i] == 'b' && count_a > 0)
            {
                cout << 'a';
                count_a--;
            }
            else
            {
                cout << s[i];
            }
        }
    }

    return 0;
}
