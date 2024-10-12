#include<stdio.h>
#include<string.h>

int m = 10000000;

#include<stdio.h>
#include<string.h>

int main(void)
{
    char tit[100];
    int h;
    int n;
    int m;
    scanf("%d", &n);
    char min[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", tit, &h);
        if (i == 0)
        {
            m = h;
            strcpy(min, tit);
        }
        if (m > h)
        {
            m = h;
            strcpy(min, tit);
        }
    }
    printf("%s", min);
    return 0;
}