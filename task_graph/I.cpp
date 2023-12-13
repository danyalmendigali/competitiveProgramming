#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define S second
#define F first


const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

using namespace std;

void solve()
{
    int N;
    cin >> N;

    // Ввод списка смежности
    vector<vector<int>> adjacencyList(N + 1); // +1 для удобства индексации с 1
    for (int i = 1; i <= N; ++i) {
        int neighbors;
        cin >> neighbors;

        for (int j = 0; j < neighbors; ++j) {
            int neighborVertex;
            cin >> neighborVertex;
            adjacencyList[i].push_back(neighborVertex);
        }
    }

    // Обращение графа
    vector<vector<int>> reversedGraph(N + 1);
    for (int i = 1; i <= N; ++i) {
        for (int j : adjacencyList[i]) {
            reversedGraph[j].push_back(i);
        }
    }

    // Вывод обращенного графа
    cout << N << endl;
    for (int i = 1; i <= N; ++i) {
        sort(reversedGraph[i].begin(), reversedGraph[i].end()); // Сортировка для удобства вывода
        cout << reversedGraph[i].size() << " ";
        for (int j : reversedGraph[i]) {
            cout << j << " ";
        }
        cout << endl;
    }



}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();



    return 0;
}
