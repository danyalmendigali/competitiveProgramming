#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;

void solve()
{
    int size_vector;
    cin >> size_vector;
    int sergey = 0, dima = 0;

    vector<int> num(size_vector);
    for(int i = 0; i < size_vector; i++)
    {
        cin >> num[i];
    }
    for(int i = 0; i < size_vector; i++)
    {
        int numFront = num.front();
        int numBack = num.back();

        if(i % 2 == 0)
        {
            if(numFront >= numBack)
            {
                sergey += numFront;
                num.erase(num.begin());
            }
            else
            {
                sergey += numBack;
                num.pop_back();
            }
        }
        else
        {
            if(numFront >= numBack)
            {
                dima += numFront;
                num.erase(num.begin());
            }
            else
            {
                dima += numBack;
                num.pop_back();
            }
        }
    }

    cout << sergey  << " " << dima;
}

int main() {
    cin.tie(0);


    solve();







    return 0;
}

