#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}