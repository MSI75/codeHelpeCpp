#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int row, int col);
int main()
{
    int arr[3][3];
    // taking input -> row wise input
    cout << "Enter element : ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Element of row wise sum : " << endl;
    printRowSum(arr, 3, 3);
}

void printRowSum(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}