#include <iostream>
using namespace std;

int main()
{
    int number[15] = {7, 2};
    // int n = sizeof(number);

    int n = 15;
    cout << "Printing the array : " << endl;
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << number[i] << " ";
    }

    // initialising all location with 0
    int first[10] = {0};
    // int n = sizeof(number);

    n = 10;
    cout << "Printing the array : " << endl;
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << first[i] << " ";
    }

    // initialising all location with 1 [not possible with below line]
    int second[15] = {1};
    // int n = sizeof(number);

    n = 15;
    cout << "Printing the array : " << endl;
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << second[i] << " ";
    }
}