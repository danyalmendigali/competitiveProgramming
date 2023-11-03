#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n;
    cin >> n;

    if((n % 2 == 1) || (s == "Home")) cout << "Yes" << "\n";
    else cout << "No";


}

int main() {


    solve();




    return 0;
}

