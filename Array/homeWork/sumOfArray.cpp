// Sum of all element of array

#include <iostream>
using namespace std;

int sumArray(int arr[], int n);

int main()
{
    int n;
    cout << "size of element number in array : ";
    cin >> n;

    int arr[100];
    cout << "Element number of array : ";

    // printing array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Total sum of array element :" << sumArray(arr, n);
    return 0;
}

int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}