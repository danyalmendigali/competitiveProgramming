#include <bits/stdc++.h>
using namespace std;

bool PlayOff(int arr[4])
{
    int max1 = max(arr[0], arr[1]);
    int max2 = max(arr[2], arr[3]);

    sort(arr, arr + 4);

    if((max1 == arr[2] || max1 == arr[3]) && (max2 == arr[2] || max2 == arr[3])) {
         return true;
    }
    else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int arr[4];
        for(int i = 0; i < 4; i++) {
            cin >> arr[i]; // Вводим значения элементов массива
        }

        if(PlayOff(arr))
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
