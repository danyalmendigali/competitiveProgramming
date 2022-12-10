#include <iostream>
using namespace std;
 // if, else
int main ()
{
    setlocale (LC_ALL, "rus");
    bool isRain = true;
    if  (true) {
        cout << "Надо брать зонт";
        if (false) {
            cout << "Не надо брать зонт";
        }
    }

    return 0;
}
