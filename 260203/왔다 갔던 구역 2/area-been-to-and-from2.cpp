#include <iostream>
#include <algorithm>

using namespace std;

int n, pos, dirNum, result;
int x[100], cnt[200];
char dir[100];

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> dir[i];
        dirNum = dir[i] == 'R' ? 1 : -1;
        if(i > 0 && dir[i] != dir[i-1])
            pos += dirNum;
            
        for(int j = 0; j < x[i]; j++)
        {
            cnt[pos+100]++;
            pos += 1 * dirNum;
        }
    }

    for(int i = 0; i < 200; i++)
        if(cnt[i] >= 2)
            result++;

    cout << result;

    return 0;
}