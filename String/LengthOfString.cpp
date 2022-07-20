#include <iostream>
using namespace std;

int getLength(char name[]);

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout << "My name is ";

    cout << getLength(name);
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}