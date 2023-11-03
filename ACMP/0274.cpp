#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;

void solve()
{

    string s1, s2;
    cin >> s1 >> s2;
    vector<char> str1, str2;
    int a = 0;

    for(int i = 0; i < s1.size(); i++)
    {
        str1.push_back(s1[i]);
    }

    for(int i = 0; i < s2.size(); i++)
    {
        str2.push_back(s2[i]);
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    str1.erase(unique(str1.begin(), str1.end()), str1.end());
    str2.erase(unique(str2.begin(), str2.end()), str2.end());

    int max_size = max(str1.size(), str2.size());


    for(int i = 0; i < max_size; i++)
    {
        if(str1[i] == str2[i])
        {
            a++;
        }
    }

    if(a == max_size)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

}

int main() {

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }


    return 0;
}








