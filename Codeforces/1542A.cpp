#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

string ParityModsets(int* arr, int n)
{
    int o = 1, e = 0;
    FOR(i, 0, n * 2)
    {
        int x;
        cin >> x;
        if(x & 1) o++;
        else e++;
    }

    if(o == e)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }

}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << ParityModsets(arr, n) << endl;
    }








  return 0;
}



