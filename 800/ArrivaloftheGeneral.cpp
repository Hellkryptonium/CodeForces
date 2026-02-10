#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN, min = INT_MAX;
    int maxPos = 0, minPos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            minPos = i;
        }
    }

    int result = maxPos + (n - 1 - minPos);
    if (maxPos > minPos)
    {
        result--;
    }
    cout << result;

    return 0;
}