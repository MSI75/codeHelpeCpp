#include <iostream>
using namespace std;

int firstSearch(int arr[], int n, int key);
int lastSearch(int arr[], int n, int key);

int main()
{

    int arr[] = {75, 45, 35, 3, 3, 3, 3};
    int n = sizeof(arr) / sizeof(int);
    int firstOccurrence = firstSearch(arr, n, 3);
    int lastOccurrence = lastSearch(arr, n, 3);
    int totalOccurrence = (lastOccurrence - firstOccurrence) + 1;
    cout << "last occurrence 3 index : " << firstOccurrence << endl;
    cout << "last occurrence 3 index : " << lastOccurrence << endl;
    cout << totalOccurrence << endl;
}

int firstSearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    int mid = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)

    {

        if (arr[mid] == key)

        {

            ans = mid;

            e = mid - 1; // this is done to find the leftmost occurrence!!
        }

        else if (arr[mid] < key)

        {

            s = mid + 1;
        }

        else if (arr[mid] > key)

        {

            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastSearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    int mid = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)

    {

        if (arr[mid] == key)

        {

            ans = mid;

            s = mid + 1; // this is done to find the leftmost occurrence!!
        }

        else if (arr[mid] < key)

        {

            s = mid + 1;
        }

        else if (arr[mid] > key)

        {

            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}