#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 2;
    while (i < n)
    {
        // divide , not prime
        if (n % i == 0)
        {
            cout << "Not Prime number " << i << endl;
        }
        else
        {
            cout << "Prime number " << i << endl;
        }
        i++;
    }
    return 0;
}