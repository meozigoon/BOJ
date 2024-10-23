#include<stdio.h>
#include<string.h>

int main(void)
{
    int num;
    int r;
    char s[20];
    scanf("%d", &num);
    int i, j;
    for (i = 0; i < num; i++)
    {
        scanf("%d %s", &r, s);
        for (j = 0; j < strlen(s); j++)
        {
            for (int k = 0; k < r; k++)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}