#include <iostream>
using namespace std;

void selectionSort(int arr[], int n);

int main()
{
    int arr[] = {2, 1, 9, 8, 7, 6, 3};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);
    return 0;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            if (minIndex != i)
            {
                swap(arr[minIndex], arr[i]);
            }
        }
    }
    // sorted by array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}