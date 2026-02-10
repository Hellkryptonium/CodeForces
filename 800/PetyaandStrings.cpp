#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        char ca = tolower(a[i]);
        char cb = tolower(b[i]);

        if (ca < cb)
        {
            cout << -1;
            return 0;
        }
        if (ca > cb)
        {
            cout << 1;
            return 0;
        }
    }

    cout << 0;
    return 0;
}