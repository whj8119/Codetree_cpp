#include <iostream>

using namespace std;

#define MAX_SIZE 101

int N, M, K;
int student[10000], cnt[MAX_SIZE];

int main()
{
    int result = -1;

    cin >> N >> M >> K;

    for (int i = 0; i < M; i++)
        cin >> student[i];

    for (int i = 0; i < M; i++)
    {
        cnt[student[i]]++;
        if(cnt[student[i]] >= K)
        {
            result = student[i];
            break;
        }
    }

    cout << result;

    return 0;
}