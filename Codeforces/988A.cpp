#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <cctype>
using namespace std;

void solve()
{
        int size_vector, sizeTeam;
        cin >> size_vector >> sizeTeam;

        vector<int> myVector(size_vector);
        vector<int> myUnique {};

        for(int i = 0; i < size_vector; i++)
        {
            cin >> myVector[i];
        }

        myUnique.push_back(myVector[1]);

        for(int i = 0; i < size_vector; i++)
        {
            for(int j = 0; j < size_vector; j++)
            {
                if(myVector[i] != myUnique[j])
                {
                    myUnique.push_back(myVector[i]);
                    continue;
                }
            }
        }


        for(int i = 0; i < myUnique.size(); i++)
        {
            cout << myUnique[i] << " ";
        }
}

int main() {


      solve();





    return 0;
}










