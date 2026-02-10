#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    int num[4] = {0};

    for (char c : s)
    {
        num[c - '0']++;
    }
    bool first = true;
    for (int i = 1; i <= 3; i++)
    {
        while (num[i]--)
        {
            if (!first)
                cout << "+";
            cout << i;
            first = false;
        }
    }
    return 0;
}