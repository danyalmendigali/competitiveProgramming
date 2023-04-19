#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    for(int i = 0; i < n.size(); ++i){
        int pos = n.find(n[i], i + 1);
        while(pos + 1){
            n.erase(n.begin() + pos);
            pos = n.find(n[i], i + 1);
        }
    }
    
    if(n.size() % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
        
        
        

    return 0;
}
