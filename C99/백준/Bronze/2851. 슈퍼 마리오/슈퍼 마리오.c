#include<stdio.h>
#include<math.h>

int main()
{
    int a[10];
    int i;
    int ans = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (abs(ans + a[i] - 100) <= abs(ans - 100))
        {
            ans += a[i];
        }
        else
        {
            break;
        }
    }
    printf("%d", ans);
    return 0;
}