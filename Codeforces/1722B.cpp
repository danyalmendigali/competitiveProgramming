#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int a = 0;

    for(int i = 0; i < n; i++)
    {
        if(s1[i] == 'G')
        {
            s1[i] = 'G';
        }
        if(s1[i] == 'B')
        {
            s1[i] = 'G';
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(s2[i] == 'G')
        {
            s2[i] = 'G';
        }

        if(s2[i] == 'B')
        {
            s2[i] = 'G';
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(s1[i] == s2[i])
        {
            a++;
        }
    }

    if(a == n)
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









