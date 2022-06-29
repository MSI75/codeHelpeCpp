#include <iostream>
using namespace std;

void insertionSort(int arr[], int n);

int main()
{
    int arr[] = {7, 2, 3, 8, 1, 6};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    return 0;
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}