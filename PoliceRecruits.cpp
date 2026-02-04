#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int freePolice = 0;
    int untreatedCrimes = 0;

    for (int i = 0; i < n; i++)
    {
        int event;
        cin >> event;

        if (event == -1)
        {
            if (freePolice > 0)
            {
                freePolice--;
            }
            else
            {
                untreatedCrimes++;
            }
        }
        else
        {
            freePolice += event;
        }
    }

    cout << untreatedCrimes;
    return 0;
}