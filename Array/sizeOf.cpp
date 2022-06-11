#include <iostream>
using namespace std;

void printSizeOf(int arr[], int size);

int main()
{
    int arr[] = {7, 8, 2, 5, 3, 1, 9};
    int size = sizeof(arr) / sizeof(int);
    printSizeOf(arr, size);
    return 0;
}

void printSizeOf(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done !" << endl;
}