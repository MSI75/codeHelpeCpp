#include <iostream>
using namespace std;

int getMax(int arr[], int size);
int getMin(int arr[], int size);

int main()
{
    int size;
    cout << "Index of array : ";
    cin >> size;

    int arr[100];
    cout << "Value of array : ";
    // Taking input an array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The maximum number of array : " << getMax(arr, size) << endl;
    cout << "The minimum number of array : " << getMin(arr, size) << endl;

    return 0;
}

int getMax(int arr[], int size)
{
    int maxi = INT_MIN;
    // int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);

        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    // returning max value
    return maxi;
}

int getMin(int arr[], int size)
{
    // int min = INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);

        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    // returning min value
    return mini;
}