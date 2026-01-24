#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int anton = 0, danik = 0;
    for (char c : s)
    {
        if (c == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton";
        return 0;
    }
    else if (anton < danik)
    {
        cout << "Danik";
        return 0;
    }
    cout << "Friendship";
    return 0;
}