#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie();

     int h;
     cin >> h;
     for(int i = 0; i < h; ++i) {
         string s;
         cin >> s;
         int l = 0;
         if (s[0] != 'c') {
            l++;
         }
         if(s[1] != 'o') {
            l++;
         }
         if(s[2] != 'd') {
            l++;
         }

         if(s[3] != 'e') {
            l++;
         }

         if(s[4] != 'f') {
            l++;
         }
         if(s[5] != 'o') {
            l++;
         }

         if(s[6] != 'r') {
            l++;
         }

         if(s[7] != 'c') {
            l++;
         }

         if(s[8] != 'e') {
            l++;
         }

         if(s[9] != 's') {
            l++;
         }

         cout << l << endl;

     }



   return 0;
}




