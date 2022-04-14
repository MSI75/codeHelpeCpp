#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    float b = 7.5;
    char ch = 'a';
    double dl = 7.365;
    bool bl = true;

    int size = sizeof(a);
    int size1 = sizeof(b);
    int size2 = sizeof(ch);
    int size3 = sizeof(dl);
    int size4 = sizeof(bl);

    cout << "Size of a is : " << size << endl;
    cout << "Size of b is : " << size1 << endl;
    cout << "Size of ch is : " << size2 << endl;
    cout << "Size of dl is : " << size3 << endl;
    cout << "Size of bl is : " << size4 << endl;
    return 0;
}