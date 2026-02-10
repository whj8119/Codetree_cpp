#include <iostream>
#include <algorithm>

using namespace std;

int N, len, maxLen;
int arr[1000];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for(int i = 0; i < N; i++)
    {
        len = 1;
        for(int j = i + 1; j < N; j++)
        {
            if(arr[j-1] < arr[j])
                len++;
            else
                break;
        }
        maxLen = max(maxLen, len);
    }

    cout << maxLen;

    return 0;
}