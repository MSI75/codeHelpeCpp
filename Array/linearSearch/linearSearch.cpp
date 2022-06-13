#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key);

int main()
{
    int arr[] = {7, 98, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int key = 5;

    int result = linearSearch(arr, size, key);
    if (result == -1)
    {
        cout << "Not found !";
    }
    else
    {
        cout << "Index of the element : " << result;
    }
    return 0;
}

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return arr[i];
        }
    }

    return -1;
}