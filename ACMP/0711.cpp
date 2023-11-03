#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> names(n);
    vector<int> result(n);

    for(int i = 0; i < n; i++)
    {
        cin >> names[i];
        int sum = 0;

        for(int j = 0; j < m; j++)
        {
            int time;
            cin >> time;

            sum += time;
        }
        result[i] = sum;
    }


    int min_iter = min_element(result.begin(), result.end()) - result.begin();

    cout << names[min_iter] << endl;
}


int main() {


    solve();





    return 0;
}

