#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x);

int main()
{
    int arr[100], n, key;
    cout << "Enter the number of N : ";
    cin >> n;

    cout << "Printing the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of Key : ";
    cin >> key;

    int binary = binarySearch(arr, n, key);
    if (binary == -1)
    {
        cout << "Not value of array ";
    }
    else
    {
        cout << "The binary Search : " << binary;
    }
}

int binarySearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
