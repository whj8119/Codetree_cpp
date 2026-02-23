#include <iostream>

using namespace std;

int n, dist, idx, x, y;
char dir;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> dir >> dist;

        switch(dir)
        {
            case 'E':
                idx = 0;
                break;
            case 'N':
                idx = 1;
                break;
            case 'W':
                idx = 2;
                break;
            case 'S':
                idx = 3;
                break;
        }

        x += dx[idx] * dist;
        y += dy[idx] * dist;
    }

    cout << x << ' ' << y;

    return 0;
}