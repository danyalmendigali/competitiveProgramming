#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define all(a) a.begin() , a.end()
#define optimus_prime  cin.tie(0); cout.tie(0)
#define endl "\n"
#define vll vector<long long>
#define vi vector<int>
#define FOR(i, a, b) for(char i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 101;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;


void solve()
{
    /*
    int n;
    cin >> n;
    vector<vector<char>> mx(n, vector<char>(n));
    vector<char> result;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mx[i][j];
        }
    }



    char firstElement = mx[0][0];

    FOR(i, 0, n)
        FOR(j, 0, n)
            if(i == j) result.pb(mx[i][j]);


    FOR(i, 0, n)
        FOR(j, 0, n)
            if(i + j == n - 1) result.pb(mx[i][j]);

    char secondElement = mx[1][0];
    int a = 0;
    FOR(i, 0, n)
        FOR(j, 0, n)
            if(mx[i][j] == secondElement) a++;


    sort(all(result));
    int newSize = result.sz;
    result.erase(unique(all(result)), result.end());

    cout << (n * 2 - 1 + a == n * n && result.sz == 1 ? "YES" : "NO") << endl;
    */

	vector <char> v;
	vector <char> v1;

    int n;
    cin >> n;
    char a[n + 9][n + 9];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    v.pb(a[1][1]);
    v1.pb(a[1][2]);

    if(v[0] == v1[0])
    {
        cout << "NO" << endl;
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j || i + j == n + 1)
            {
                if(a[i][j] != v[0])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else
            {
                if(a[i][j] != v1[0])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;

}

signed main()
{
    optimus_prime;

    solve();




    return 0;
}

