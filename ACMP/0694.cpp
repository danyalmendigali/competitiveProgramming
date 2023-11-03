#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> intervals(n);

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        intervals[i] = {a, b};
    }

    for(int day = 1; day <= 31; day++) {
        bool canMeetAll = true;
        for(auto interval : intervals) {
            if(day < interval.first || day > interval.second) {
                canMeetAll = false;
                break;
            }
        }
        if(canMeetAll) {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
}


int main() {


    solve();





    return 0;
}

