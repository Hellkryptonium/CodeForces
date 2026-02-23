#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char a = s[0];
    a = tolower(a);
    s[0] = a;
    cout << "Of" << s;
    return 0;
}