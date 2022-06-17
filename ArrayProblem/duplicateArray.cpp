#include <iostream>
using namespace std;

int duplicateArray(int arr[], int size)
{
    int count = 0;

    // XOR ing all element
    for (int i = 0; i < size; i++)
    {
        count = count ^ arr[i];
    }

    // xor[1, n-1]
    for (int i = 1; i < size; i++)
    {
        count = count ^ i;
    }
    return count;
}

int main()
{
    int arr[] = {9, 2, 5, 7, 5};
    int size = sizeof(arr) / sizeof(int);

    cout << duplicateArray(arr, size);
    return 0;
}