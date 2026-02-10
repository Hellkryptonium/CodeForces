#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    bool seen[26] = {false};
    int distinct = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if (!seen[c - 'a'])
        {
            seen[c - 'a'] = true;
            distinct++;
        }
    }

    cout << ((distinct % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}