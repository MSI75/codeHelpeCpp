#include <iostream>
using namespace std;

void update(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 5};
    int n = sizeof(arr) / sizeof(int);

    update(arr, n);
    // printing the array
    cout << endl
         << "printing in main function !" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void update(int arr[], int n)
{
    cout << "Inside the function : " << endl;

    // updating array's first element
    arr[2] = 75;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Going back to main function ! " << endl;
}