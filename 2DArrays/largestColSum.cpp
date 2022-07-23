#include <iostream>
using namespace std;

int largestColSum(int arr[][3], int row, int col);
int main()
{
    int arr[3][3];
    // taking input
    cout << "Enter element : ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[col][row];
        }
    }

    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[col][row] << " ";
        }
        cout << endl;
    }

    int ansIndex = largestColSum(arr, 3, 3);
    cout << "Max col index : " << ansIndex << endl;
    return 0;
}

int largestColSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int colIndex = -1;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[col][row];
        }
        if (sum >= maxi)
        {
            maxi = sum;
            colIndex = col;
        }
    }
    cout << "Maximum element " << maxi << endl;
    return colIndex;
}