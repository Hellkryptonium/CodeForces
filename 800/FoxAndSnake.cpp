#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            // Odd rows: full snake
            cout << string(m, '#') << "\n";
        }
        else if (i % 4 == 2)
        {
            // Snake on the right
            cout << string(m - 1, '.') << "#\n";
        }
        else
        {
            // Snake on the left
            cout << "#" << string(m - 1, '.') << "\n";
        }
    }

    return 0;
}
