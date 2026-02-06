#include <iostream>

using namespace std;

#define OFFSET 100
#define SIDE 8

int N, x, y, result;
int coord[OFFSET * 2 + 1][OFFSET * 2 + 1];

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;

        for(int i = 0; i < SIDE; i++)
            for(int j = 0; j < SIDE; j++)
                coord[y+OFFSET+i][x+OFFSET+j] = 1;
    }

    for(int i = 0; i < OFFSET*2+1; i++)
        for(int j = 0; j < OFFSET*2+1; j++)
            if(coord[i][j] == 1)
                result++;
    
    cout << result;

    return 0;
}