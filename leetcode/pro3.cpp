#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n != 0)
    {
        int rev = n % 10;
        sum = 10 * sum + rev;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}