#include <iostream>

using namespace std;

#define OFFSET 100
#define MAX_SIZE 200

int n, result;
int x1[10], y1[10], x2[10], y2[10];
int coord[MAX_SIZE][MAX_SIZE];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        for(int j = y1[i]; j < y2[i]; j++)
            for(int k = x1[i]; k < x2[i]; k++)
                coord[j+OFFSET][k+OFFSET] = i % 2;
    }

    for(int i = 0; i < MAX_SIZE; i++)
        for(int j = 0; j < MAX_SIZE; j++)
            if(coord[i][j] == 1)
                result++;
    
    cout << result;

    return 0;
}