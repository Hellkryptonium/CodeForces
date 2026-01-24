#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int n;
            cin >> n;
            if (n == 1)
            {
                cout << abs(3 - i) + abs(3 - j);
                return 0;
            }
        }
    }
}