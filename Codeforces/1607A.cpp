#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if(s2.size() == 1)
    {
        cout << "0" << "\n";
    }
    else{
        int a = 0;
        for(int i = 0; i < s2.size(); i++)
        {
            int index1, index2;
            int a1 = s2[i];
            int a2 = s2[i + 1];
            for(int i = 0; i < s1.size(); i++)
            {
                if(s1[i] == a1)
                {
                    index1 = i;
                }
                if(s1[i] == a2)
                {
                    index2 = i;
                }
            }
            a += abs(index1 - index2);
        }

        cout << a << "\n";
    }
}


int main() {
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }






    return 0;
}

