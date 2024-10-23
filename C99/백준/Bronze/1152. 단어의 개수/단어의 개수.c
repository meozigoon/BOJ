#include<stdio.h>
#include<string.h>

char a[1000000];

int main(void)
{
    int cnt = 0;
    gets(a);
    if (a[0] == ' ')
    {
        cnt--;
    }
    if (a[strlen(a) - 1] == ' ')
    {
        cnt--;
    }
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ')
        {
            cnt++;
        }
    }
    printf("%d", cnt + 1);
    return 0;
}