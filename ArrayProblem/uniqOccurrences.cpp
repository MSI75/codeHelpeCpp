#include <iostream>
using namespace std;

bool uniqOccurrences(int arr[], int size);

int main()
{
    int arr[] = {12, 13, 14, 12, 13};
    int size = sizeof(arr) / sizeof(int);

    cout << uniqOccurrences(arr, size);
}
bool uniqOccurrences(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[ans] != arr[i])
        {
            return false;
        }
        ans++;
    }
    return true;
}