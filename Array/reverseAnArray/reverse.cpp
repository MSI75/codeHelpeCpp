#include <iostream>
using namespace std;

void reverseArray(int arr[], int n);
void printArray(int arr[], int n);
int main()
{
    int arr[] = {7, 5, 3, 9, 2, 1, 6};
    int n = sizeof(arr) / sizeof(int);

    reverseArray(arr, n);
    printArray(arr, n);
}

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}