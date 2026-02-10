#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        string word;
        cin >> word;
        int len = word.size();

        if (len <= 10)
        {
            cout << word << '\n';
        }
        else
        {
            cout << word[0] << len - 2 << word[len - 1] << '\n';
        }
    }
    return 0;
}