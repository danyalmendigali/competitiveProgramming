#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

string MyFunction(int w, int h, int n)
{
    int count = 1;

    while((w % 2 == 0 || h % 2 == 0) && count < n)
    {
        if(w % 2 == 0)
        {
            w /= 2;
            count *= 2;
        }

        else if(h % 2 == 0)
        {
            h /= 2;
            count *= 2;
        }
    }


    if(count >= n)
    {
        return "YES";
    }
    else {
        return "NO";
    }

}


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        cout << MyFunction(w, h, n);
        cout << endl;
    }

    return 0;
}

