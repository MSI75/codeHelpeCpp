#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans;
    for (int i = 0; i <= n; i++)
    {
        ans = pow(2, i);
    }
    cout << ans << endl;
    return 0;
}