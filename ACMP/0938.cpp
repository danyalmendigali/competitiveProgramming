#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int countPrimeDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0 && isPrime(i))
            ++count;
    }
    return count;
}

void solve() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    int maxDivisors = -1;
    int result = -1;

    for (int i = 0; i < N; ++i) {
        int divisors = countPrimeDivisors(numbers[i]);
        if (divisors > maxDivisors || (divisors == maxDivisors && numbers[i] < result)) {
            maxDivisors = divisors;
            result = numbers[i];
        }
    }

    cout << result << endl;
}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();


    return 0;
}
