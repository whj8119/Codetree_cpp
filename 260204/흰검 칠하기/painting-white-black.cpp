#include <iostream>

using namespace std;

int n, dirNum, pos, white, black, gray;
int x[1000];
char dir[1000];
int cnt[2000000];
const int kIndex = 1000000;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> dir[i];

        dirNum = dir[i] == 'R' ? 1 : -1;
        cnt[pos + kIndex]++;
        for(int j = 0; j < x[i]-1; j++)
        {
            pos += dirNum;
            cnt[pos + kIndex]++;
        }
    }

    for(int i = 0; i < kIndex; i++)
    {
        if (cnt[i] <= 0)
            continue;
        else if(cnt[i] >= 4)
            gray++;
        else if(cnt[i] % 2 == 1)
            white++;
        else
            black++; 
    }

    if (cnt[kIndex] >= 4)
        gray++;
    else if(dir[0] == 'L')
    {
        if(cnt[kIndex] % 2 == 1)
            white++;
        else
            black++;
    }
    else
    {
        if(cnt[kIndex] % 2 == 1)
            black++;
        else
            white++;
    }

    for(int i = kIndex+1; i < kIndex*2; i++)
    {
        if (cnt[i] <= 0)
            continue;
        else if(cnt[i] >= 4)
            gray++;
        else if(cnt[i] % 2 == 1)
            black++;
        else
            white++; 
    }

    cout << white << ' ' << black << ' ' << gray;

    return 0;
}