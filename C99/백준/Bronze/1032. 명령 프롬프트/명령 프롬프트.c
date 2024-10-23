#include<stdio.h>
#include<string.h>

char l[60][60] = { { '\0', }, };

int main()
{
    int N;
    scanf("%d", &N);
    char a[60] = { '\0', };
    for (int i = 0; i < N; i++)
    {
        scanf("%s", &l[i]);
    }

    if (N != 1)
    {
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = 0; j < strlen(l[i]); j++)
            {
                if (l[i][j] != l[i + 1][j])
                {
                    a[j] = '?';
                }
                else if (a[j] != '?')
                {
                    a[j] = l[i][j];
                }
            }
        }
        printf("%s", a);
    }
    else
    {
        printf("%s", l[0]);
    }
    return 0;
}