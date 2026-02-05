#include <iostream>

using namespace std;

#define OFFSET 1000

int x1[3], y1[3], x2[3], y2[3], area[OFFSET*2][OFFSET*2];
int result;

int main()
{
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    for(int i = 0; i < 2; i++)
        for(int y = y1[i]; y < y2[i]; y++)
            for(int x = x1[i]; x < x2[i]; x++)
                area[y+OFFSET][x+OFFSET] = 1;
        
    for(int y = y1[2]; y < y2[2]; y++)
            for(int x = x1[2];  x < x2[2]; x++)
                area[y+OFFSET][x+OFFSET] = 0;
    
    for(int y = 0; y < OFFSET*2; y++)
        for(int x = 0; x < OFFSET*2; x++)
            if (area[y][x] == 1)
                result++;

    cout << result;

    return 0;
}