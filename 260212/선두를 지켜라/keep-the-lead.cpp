#include <iostream>

using namespace std;

#define MAX_SIZE 1000001

int N, M, v, t, aTime, bTime, first, cnt;
int a[MAX_SIZE], b[MAX_SIZE];
int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> v >> t;

        for(int j = 1; j <= t; j++)
            a[aTime+j] = a[aTime+j-1] + v;
        
        aTime += t;
    }
    
    for (int i = 0; i < M; i++)
    {
        cin >> v >> t;

        for(int j = 1; j <= t; j++)
            b[bTime+j] = b[bTime+j-1] + v;
        
        bTime += t;
    }

    first = -1;

    for(int i = 0; i <= aTime; i++)
    {
        if(first != 1 && a[i] > b[i])
        {
            cnt++;
            first = 1;
        }
        else if(first != 2 && a[i] < b[i])
        {
            cnt++;
            first = 2;
        }
    }

    cout << cnt;


    return 0;
}