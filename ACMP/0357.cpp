#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    long long sum_1 = 0;
    long long sum_2 = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(i % 2 == 0)
        {
            sum_1 += s[i] - '0';
        }
        else if(i % 2 == 1)
        {
            sum_2 += s[i] - '0';
        }
    }

    if((sum_1 - sum_2) % 11 == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main() {


    solve();




    return 0;
}
