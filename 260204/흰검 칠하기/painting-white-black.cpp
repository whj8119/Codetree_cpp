#include <iostream>

using namespace std;

int n, dirNum, pos, whiteCnt, blackCnt, grayCnt;
int x[1000], white[200000], black[200000];
char dir[1000], tile[200000];
const int kIndex = 100000;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> dir[i];

        dirNum = dir[i] == 'R' ? 1 : -1;
        for(int j = 0; j < x[i]; j++)
        {
            int index = pos + kIndex + (j*dirNum);
            if(dirNum == 1)
            {
                tile[index] = 'B';
                black[index]++;
            }
            else
            {
                tile[index] = 'W';
                white[index]++;
            }
        }
        pos += (x[i]-1) * dirNum;
    }

    for(int i = 0; i < kIndex*2; i++)
    {
        if(tile[i] == '\0')
            continue;
        else if(black[i] >= 2 && white[i] >= 2)
            grayCnt++;
        else if(tile[i] == 'W')
            whiteCnt++;
        else
            blackCnt++; 
    }

    cout << whiteCnt << ' ' << blackCnt << ' ' << grayCnt;

    return 0;
}