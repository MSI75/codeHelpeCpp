#include <iostream>
using namespace std;

void swapAlternative(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int even[] = {7, 2, 25, 6, 9, 3};
    int odd[] = {12, 25, 75, 36, 56};
    int size1 = sizeof(even) / sizeof(int);
    int size2 = sizeof(odd) / sizeof(int);

    swapAlternative(even, size1);
    printArray(even, size1);

    cout << endl;

    swapAlternative(odd, size2);
    printArray(odd, size2);
    return 0;
}

void swapAlternative(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 2 < n)
        {
            swap(arr[i], arr[i + 1]);
            // int swap = arr[i];
            // arr[i] = arr[i + 1];
            // arr[i + 1] = swap;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}