#include <iostream>
using namespace std;

int printArray(int array[], int size);

int main()
{
    int array[] = {7, 2, 6, 8, 9};
    int n = 5;
    printArray(array, n);
    return 0;
}

int printArray(int array[], int size)
{
    cout << "Printing the array : " << endl;
    // print the array
    for (int i = 0; i <= size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "Printing Done !" << endl;
}
