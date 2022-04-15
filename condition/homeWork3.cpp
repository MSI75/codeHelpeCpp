#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch == 'a')
    {
        cout << "This is lowerCase smaller " << endl;
    }
    else if (ch == 'A')
    {
        cout << "This is upperCase smaller " << endl;
    }
    else
    {
        cout << "This is Numarical" << endl;
    }
    return 0;
}