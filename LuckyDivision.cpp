#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int lucky[] = {4, 7, 44, 47, 77, 74, 444, 447, 474, 477, 777, 747, 744, 774};

    for (int x : lucky)
    {
        if (n % x == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}