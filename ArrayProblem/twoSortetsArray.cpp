#include <iostream>
using namespace std;

int twoSortedArray(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            return arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return arr1[i];
}

int main()
{
    int arr1[] = {1, 2, 5, 7};
    int n = sizeof(arr1) / sizeof(int);
    int arr2[] = {2, 5, 9};
    int m = sizeof(arr2) / sizeof(int);

    cout << twoSortedArray(arr1, arr2, n, m);
    return 0;
}