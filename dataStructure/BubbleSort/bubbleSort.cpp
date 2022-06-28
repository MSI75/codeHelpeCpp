#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
int main()
{
    int arr[] = {7, 2, 9, 10, 56, 3, 1, 5};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    return 0;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // for i = 0 and i<n-1
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}