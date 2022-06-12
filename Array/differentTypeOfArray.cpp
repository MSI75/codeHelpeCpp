#include <iostream>
using namespace std;

char printArray(char arr[], char size);

int main()
{
    char arr[] = {'a', 'b', 'c', 'd'};
    char size = sizeof(arr) / sizeof(char);

    // cout << printArray(arr);

    int result = printArray(arr, size);

    // char ch[] = {'a', 'b', 'c', 's', 'n'};

    // cout << printArray(arr, size);
    return 0;
}
char printArray(char arr[], char size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// float firstArray[7];
// double secondArray[5];
// bool thirdArray[9];