#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;

    set<char> solvedTasks;
    char lastTask = s1[0];
    solvedTasks.insert(lastTask);

    for (int i = 1; i < n; i++) {
        // Если текущая задача отличается от предыдущей
        if (s1[i] != lastTask) {
            // Если текущая задача уже была решена ранее, выводим "NO"
            if (solvedTasks.find(s1[i]) != solvedTasks.end()) {
                cout << "NO" << "\n";
                return;
            }
            // Добавляем текущую задачу в множество решенных
            solvedTasks.insert(s1[i]);
            lastTask = s1[i];
        }
    }
    cout << "YES" << "\n";
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

