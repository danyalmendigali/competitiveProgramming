#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    bool isHappy = true;
    int age;
    cin >> age;
    if (age > 18) { //   >= больше или равно, <= меньше или равно, == равно, != не равно,
        cout << "Your age in bigger than 18" << endl;
    }   else if ( age == 17 ) {    //  if если
        if ( isHappy == true)
            cout << "You are happy" << endl;
        cout << "Your age in equal than 18" << endl;
    } else {                                  // else иначе
        cout << "Your age in less than 18" << endl;

    }

    return 0;
}
