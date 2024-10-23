#include <stdio.h>

int main()
{
    int m, n, arr[1000001] = {0,};
    arr[1] = 1;
    int sum = 0;
    int min;
    int cnt = 0;
    scanf("%d %d", &m, &n);
    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; i * j <= n; j++)
        {
            arr[i*j] = 1;
        }
    }
    for(int i = m; i <= n; i++)
    {
        if(arr[i] == 0)
        {
            sum += i;
            cnt++;
        }
    }
    for(int i=m;i<=n;i++)
    {
        if(arr[i] == 0)
        {
            min = i;
            break;
        }
    }
    if(cnt == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, min);   
    }
    return 0;
}