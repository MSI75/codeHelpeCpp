#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value of a " << endl;
    cin >> a;
    // cout << "Enter the value of b " << endl;
    // cin >> b;

    /*  if (a > b)
     {
         cout << "A is greater " << endl;
     }
     if (b > a)
     {
         cout << "B is greater " << endl;
     } */

    /*

    if (a > 0)
    {
        cout << "A is positive " << endl;
    }
    else
    {
        if (a < 0)
        {
            cout << "A is Negative " << endl;
        }
        else
        {
            cout << "A is Zero " << endl;
        }
    }

    */

    if (a > 0)
    {
        cout << "A is positive " << endl;
    }
    else if (a < 0)
    {
        cout << "A is Negative " << endl;
    }
    else
    {
        cout << "A is zero " << endl;
    }
    return 0;
}