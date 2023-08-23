#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int a = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '>' && s[i + 1] == '>' &&  s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == '>')
        {
            a++;
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '<' && s[i + 1] == '-' &&  s[i + 2] == '-' && s[i + 3] == '<' && s[i + 4] == '<')
        {
            a++;
        }
    }
    cout << a;
}

int main()
{


    solve();


    return 0;
}

