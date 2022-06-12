#include <iostream>
using namespace std;

int getMax(int arr[], int size);
int getMin(int arr[], int size);

int main()
{
}

int getMax(int arr[], int size)
{
    int max = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }
}