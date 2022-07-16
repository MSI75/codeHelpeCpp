#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[12] = "Babbar";
    m[4] = "love";
    m[2] = "code";

    m.insert({5, "Beanga"});

    cout << "Before erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "finding -12 -> " << m.count(-12) << endl;

    m.erase(12);
    cout << "After erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
    return 0;
}