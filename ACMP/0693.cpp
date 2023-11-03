#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    for(int i = 0; i < s1.size(); i++)
    {
        s1[i] = tolower(s1[i]);
    }
    for(int i = 0; i < s2.size(); i++)N
    {
        s2[i] = tolower(s2[i]);
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());


    if(s1 == s2)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

}

int main() {


    solve();


    return 0;
}







