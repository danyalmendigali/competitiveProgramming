#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int INT_ARR = 4;

void solve() {

    int t;
    cin >> t;
    while(t--) {
    vector <int> myVector;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        myVector.push_back(a);
      }

      vector <int> myVector_2 = myVector;

      sort(myVector.begin(), myVector.end());
      auto it = unique(myVector.begin(), myVector.end());
      myVector.erase(it, myVector.end());




      int a = myVector[0];
      int b = myVector[1];
      int a1 = 0, b1 = 0;
      int index_a, index_b;

      for(int i = 0; i < n; i++) {
        if(myVector_2[i] == a) {
            a1++;
            index_a = i;
        }
        if(myVector_2[i] == b) {
            b1++;
            index_b = i;
        }
      }


      if(a1 == 1) {
        cout << index_a + 1<< endl;
      }
      else if(b1 == 1) {
        cout << index_b + 1 << endl;
      }
    }




}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}

