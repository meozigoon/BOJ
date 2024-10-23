#include<stdio.h>
#include<string.h>

char c[10001];

int main()
{
    int cnt = 0;
    int i;
    while (1)
    {
        gets(c);
        if (strcmp(c, "Was it a cat I saw?") == 0)
            break;
        cnt++;
        for (i = 0; i < strlen(c); i += (cnt + 1))
        {
            printf("%c", c[i]);
        }
        printf("\n");
    }
    return 0;
}