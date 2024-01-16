#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>

#define ll long long9
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;


void solve()
{
    int lessonNumber;
    cin >> lessonNumber;

    int startHour = 9;
    int startMinute = 0;
    int lessonDuration = 45;
    int shortBreakDuration = 5;
    int longBreakDuration = 15;

    int endMinute = startMinute + lessonNumber * (lessonDuration + shortBreakDuration);
    int endHour = startHour + endMinute / 60;
    endMinute = endMinute % 60;

    if (lessonNumber > 1) {
        int longBreaks = (lessonNumber - 1) / 2;
        endMinute += longBreaks * longBreakDuration;
        endHour += endMinute / 60;
        endMinute = endMinute % 60;
    }

    cout << endHour << " " << endMinute << endl;

}

signed main()
{
    mendigalitrue;
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();




    return 0;
}
