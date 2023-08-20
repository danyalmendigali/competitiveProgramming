#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;


int main() {
    cin.tie(0);

    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;

    int num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            num_1++;
        }
        if(s[i] == '2')
        {
            num_2++;
        }
        if(s[i] == '3')
        {
            num_3++;
        }
        if(s[i] == '4')
        {
            num_4++;
        }
    }

    int sum = (num_1 * a1) + (num_2 * a2) + (num_3 * a3) + (num_4 * a4);

    cout << sum;






    return 0;
}

