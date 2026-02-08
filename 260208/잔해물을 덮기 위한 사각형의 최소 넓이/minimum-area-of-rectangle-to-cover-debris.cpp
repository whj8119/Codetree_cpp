#include <iostream>
#include <algorithm>

using namespace std;

#define OFFSET 1000
#define MAX_SIZE OFFSET * 2 + 1

int x1[2], y1[2], x2[2], y2[2];
int coord[MAX_SIZE][MAX_SIZE];

int main()
{
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    for(int i = y1[0]; i < y2[0]; i++)
        for(int j = x1[0]; j < x2[0]; j++)
            coord[i+OFFSET][j+OFFSET] = 1;
    
    for(int i = y1[1]; i < y2[1]; i++)
        for(int j = x1[1]; j < x2[1]; j++)
            coord[i+OFFSET][j+OFFSET] = 0;
    
    int minX = MAX_SIZE, maxX = 0, minY = MAX_SIZE, maxY = 0;
    bool firstRectExist = false;
    
    for(int i = 0; i < MAX_SIZE; i++)
        for(int j = 0; j < MAX_SIZE; j++)
            if(coord[i][j] == 1)
            {
                firstRectExist = true;
                minX = min(minX, j);
                maxX = max(maxX, j);
                minY = min(minY, i);
                maxY = max(maxY, i);
            }
    
    int area = 0;

    if(firstRectExist)
        area = (maxX - minX + 1) * (maxY - minY + 1);

    cout << area;

    return 0;
}