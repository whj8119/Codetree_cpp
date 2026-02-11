#include <iostream>

using namespace std;

#define MAX_SIZE 1000000

int n, m, t, aTime, bTime;
char d;
int a[MAX_SIZE], b[MAX_SIZE];

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> d >> t;

        if(d == 'R')
            while(t--)
            {
                aTime++;
                a[aTime] = a[aTime-1] + 1;
            }
        else
            while(t--)
            {
                aTime++;
                a[aTime] = a[aTime-1] - 1;
            }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> d >> t;

        if(d == 'R')
            while(t--)
            {
                bTime++;
                b[bTime] = b[bTime-1] + 1;
            }
        else
            while(t--)
            {
                bTime++;
                b[bTime] = b[bTime-1] - 1;
            }
    }

    int result = -1;

    for(int i = 1; i < MAX_SIZE; i++)
    {
        if(a[i] == b[i])
        {
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}