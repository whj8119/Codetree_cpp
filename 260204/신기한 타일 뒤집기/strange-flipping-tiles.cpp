#include <iostream>
using namespace std;

#define MAX_DISTANCE 100000

int n, x, pos, w, b;
int tile[MAX_DISTANCE * 2];
char dir;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> dir;

        if(dir == 'L')
        {
            while(x--)
            {
                tile[pos + MAX_DISTANCE] = 1;
                if(x) pos--;
            }
        }
        else
        {
            while(x--)
            {
                tile[pos + MAX_DISTANCE] = 2;
                if(x) pos++;
            }
        }
    }

    for(int i = 0; i < MAX_DISTANCE * 2; i++)
    {
        if(tile[i] == 1)
            w++;
        else if(tile[i] == 2)
            b++;
    }

    cout << w << ' ' << b;

    return 0;
}