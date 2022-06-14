#include <iostream>
using namespace std;

int uniqArray(int arr[], int size);

int main()
{
    int n, size, arr[100];
    cout << "Enter a number : ";
    cin >> n;
    cout << "The size of array : ";
    cin >> size;

    cout << "printing array : ";

    // array printing
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "the uniq number : " << uniqArray(arr, size);
}

int uniqArray(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}