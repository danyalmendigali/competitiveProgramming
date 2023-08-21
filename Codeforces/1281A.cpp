#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve1()
{
    string s;
    cin >> s;
    char s1 = s[s.size() - 5];
    char s2 = s[s.size() - 4];
    char s3 = s[s.size() - 3];
    char s4 = s[s.size() - 2];
    char s5 = s[s.size() - 1];

    if(s1 == 'm' && s2 == 'n' && s3 == 'i' && s4 == 'd' && s5 == 'a')
    {
        cout << "KOREAN" << "\n";
    }
    else if(s4 == 'p' && s5 == 'o')
    {
        cout << "FILIPINO" << "\n";
    }
    else
    {
        cout << "JAPANESE" << "\n";

    }
}

int main() {
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {

      solve1();

    }









    return 0;
}
