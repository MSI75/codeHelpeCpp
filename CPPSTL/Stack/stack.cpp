#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("love");
    s.push("Babbar");
    s.push("Code");

    cout << "Top Element -> " << s.top() << endl;

    s.pop();
    cout << "Top Element -> " << s.top() << endl;

    cout << "Size of stack " << s.size() << endl;

    cout << "Empty or not " << s.empty() << endl;
}