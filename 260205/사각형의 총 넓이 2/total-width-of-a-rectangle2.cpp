#include <iostream>

using namespace std;

#define OFFSET 100

int N, x1, y1, x2, y2, result;
int a[OFFSET*2+1][OFFSET*2+1];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        for(int j = x1+OFFSET; j < x2+OFFSET; j++)
            for(int k = y1+OFFSET; k < y2+OFFSET; k++)
                a[j][k] = 1;
    }

    for(int i = 0; i < OFFSET*2+1; i++)
        for(int j = 0; j < OFFSET*2+1; j++)
            if(a[i][j] == 1)
                result++;
    
    cout << result;

    return 0;
}