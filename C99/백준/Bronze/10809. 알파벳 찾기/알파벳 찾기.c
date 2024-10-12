#include <stdio.h>

int main(void)
{
    char word[100] = { 0 };
    scanf("%s", word);
    for (int i = 97; i <= 122; i++)
    {
        int j = 0;
        while (word[j] != 0)
        {
            if (word[j] == i)
                break;
            j++;
        }
        if (word[j] == i)
            printf("%d ", j);
        else
            printf("-1 ");
    }
}