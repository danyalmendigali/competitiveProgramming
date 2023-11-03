#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;

void solve()
{
    int size_vector;
    cin >> size_vector;
    vector<int> myVector(size_vector);
    for(int i = 0; i < size_vector; i++)
    {
        cin >> myVector[i];
    }

    int task1 = 0, task2 = 1;
    for(int i = 0; i < size_vector; i++)
    {
        if(myVector[i] >= 0)
        {
            task1 += myVector[i];
        }
    }

    int maxElement = myVector[0];
    int minElement = myVector[0];
    int index_max = 0, index_min = 0;
    for(int i = 0; i < size_vector; i++)
    {
        if(myVector[i] >= maxElement)
        {
            maxElement = myVector[i];
            index_max = i;
        }
    }

    for(int i = 0; i < size_vector; i++)
    {
        if(myVector[i] <= minElement)
        {
            minElement = myVector[i];
            index_min = i;
        }
    }

     if(index_min > index_max)
     {
         swap(index_min, index_max);
     }



    for(int i = index_min + 1; i < index_max; i++)
    {
        task2 *= myVector[i];
    }

    cout << task1 << " " << task2;





}

int main() {


    solve();


    return 0;
}








