#include <iostream>
using namespace std;

char toLowerCase(char ch);
int checkPalindrome(char name[], int n);

int main()
{
    char name[20];
    cout << "Enter your name : ";
    cin >> name;

    // size
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    int len = count;
    cout << "Check palindrome : ";
    cout << checkPalindrome(name, len);
    return 0;
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int checkPalindrome(char name[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}