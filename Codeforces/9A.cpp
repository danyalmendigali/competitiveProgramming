#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
   int y, w;
   cin >> y >> w;

   int maxPoint = max(y, w);

   vector<int> point;
   for(int i = maxPoint - 1; i < 6; i++)
   {
       point.push_back(i);
   }

   int size_vector = point.size();;


   if(size_vector == 0)
   {
       cout << "0/1";
   }

    if(size_vector == 1)
   {
       cout << "1/6";
   }

    if(size_vector == 2)
   {
       cout << "1/3";
   }

    if(size_vector == 3)
   {
       cout << "1/2";
   }

    if(size_vector == 4)
   {
       cout << "2/3";
   }
    if(size_vector == 5)

   {
       cout << "5/6";
   }

    if(size_vector == 6)

   {
       cout << "1/1";
   }







}

int main() {


    solve();





    return 0;
}

