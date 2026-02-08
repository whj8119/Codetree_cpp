#include <iostream>
#include <algorithm>

using namespace std;

int N, cnt, maxCnt;
int arr[1000];

int main()
{
    cin >> N;

    cnt = 1;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if(i != 0 && arr[i] == arr[i-1])
            cnt++;
        else
        {
            maxCnt = max(cnt, maxCnt);
            cnt = 1;
        }
    }
    
    maxCnt = max(cnt, maxCnt);
    cout << maxCnt;

    return 0;
}