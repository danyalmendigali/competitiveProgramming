#include <bits/stdc++.h>
#include <cmath>

#define optimus_prime ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define all(a) a.begin(), a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define p(a) push(a)
#define sz size()
#define ll long long
#define ld double
#define F first
#define S second

using namespace std;

const int N = 55;
const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const int square = 360;

map<int, int> mp;


void solve()
{
    vector<vector<char>> matrix(8, vector<char>(8));
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int first = 0, second = 0;

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(matrix[i][j] == 'Q'){
                first += 9;
            }
            if(matrix[i][j] == 'R'){
                first += 5;
            }
            if(matrix[i][j] == 'B'){
                first += 3;
            }
            if(matrix[i][j] == 'N'){
                first += 3;
            }
            if(matrix[i][j] == 'P'){
                first += 1;
            }
            if(matrix[i][j] == 'K'){
                first += 0;
            }

            if(matrix[i][j] == 'q'){
                second += 9;
            }
            if(matrix[i][j] == 'r'){
                second += 5;
            }
            if(matrix[i][j] == 'b'){
                second += 3;
            }
            if(matrix[i][j] == 'n'){
                second += 3;
            }
            if(matrix[i][j] == 'p'){
                second += 1;
            }
            if(matrix[i][j] == 'k'){
                second += 0;
            }
        }
    }


    if(second == first)
    {
        cout << "Draw";
        return;
    }
    if(second > first)
    {
        cout << "Black";
        return;
    }
    cout << "White";

}

signed main()
{
    optimus_prime;

    ll t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();


    return 0;
}

