#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key);
int main()
{
    int arr[100], n, key;
    cout << "Enter the number of N : ";
    cin >> n;

    cout << "Printing the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of Key : ";
    cin >> key;

    int linear = linearSearch(arr, n, key);
    if (linear == -1)
    {
        cout << "Not value of array ";
    }
    else
    {
        cout << "The linear Search : " << linear;
    }
    return 0;
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return arr[i];
        }
    }
    return -1;
}