#include <iostream>
using namespace std;

void solve()
{
    char str;
    cin >> str;
    string s = "qwertyuiopasdfghjklzxcvbnm";
    int index_num;
    if(str == 'm')
    {
        cout << "q";
    }
    else
        {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == str)
            {
                index_num = i;
            }
        }


       for(int i = 0; i < s.size(); i++)
       {
           if(i == index_num + 1)
           {
                  cout << s[i];
           }
       }
   }


}

int main()
{
	solve();



	return 0;
}
