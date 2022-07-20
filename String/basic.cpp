#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout << "Enter my name :";
    cin >> name;

    name[2] = '\0';
    cout << "My name is ";
    cout << name << endl;

    return 0;
}