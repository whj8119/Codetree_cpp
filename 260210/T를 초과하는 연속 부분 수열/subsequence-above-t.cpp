#include <iostream>
#include <algorithm>

using namespace std;

int n, t, len, maxLen;
int arr[1000];

int main()
{
    cin >> n >> t;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        len = 0;
        for(int j = i; j < n; j++)
        {
            if(arr[j] > t)
                len++;
            else
                break;
        }
        maxLen = max(maxLen, len);
    }

    cout << maxLen;

    return 0;
}