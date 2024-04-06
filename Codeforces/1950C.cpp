#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>


using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

void convertTime(string time24) {
    int hour = stoi(time24.substr(0, 2));
    int minute = stoi(time24.substr(3, 2));

    string period = (hour < 12) ? "AM" : "PM";

    if (hour == 0) {
        hour = 12;
    } else if (hour > 12) {
        hour -= 12;
    }

    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
}


void solve()
{
     string time24;
     cin >> time24;
     convertTime(time24);

}

signed main()
{
    int t = 1;
    cin >> t;
    while(t--) solve();




    return 0;
}
