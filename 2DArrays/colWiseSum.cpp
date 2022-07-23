#include <iostream>
using namespace std;

void printColSum(int arr[][3], int row, int col);
int main()
{
    int arr[3][3];

    // taking input -> col wise array
    cout << "Enter element : ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[col][row];
        }
    }

    // print
    cout << "show array : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[col][row] << " ";
        }
        cout << endl;
    }

    printColSum(arr, 3, 3);
}
void printColSum(int arr[][3], int row, int col)
{
    cout << "column sum : " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[col][row];
        }
        cout << sum << " ";
    }
    cout << endl;
}