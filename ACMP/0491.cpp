#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

bool string_fun(string str)
{
    bool t;
    string s;

    for(int i = str.size() - 1; i >= 0; i--)
    {
        s += str[i];
    }

    if(s != str)
    {
        t = 1;
    }

    return t;
}

int main() {
    cin.tie(0);

    int k = 0;
    string str, s, s1;
    cin >> str;

    bool t = false;

    if(string_fun(str))
    {
        cout << str;
    }

    else
    {
        cout << "NO SOLUTION" << "\n";
    }




    return 0;
}
