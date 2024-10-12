#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    int m, n;
    int a = 100000;
    scanf("%d %d", &m, &n);
    int c = 0;
    if (sqrt(n) - sqrt(m) < 1)
    {
        printf("-1");
    }
    else
    {
        for(i = 1; i < sqrt(n)+1; i++)
        {
            if (i * i >= m && i * i <= n)
            {
                if (a > i* i)
                {
                    a = i * i;
                    
                }
                c += i * i;
            }
        }

        printf("%d\n%d", c, a);
    }


    return 0;
}