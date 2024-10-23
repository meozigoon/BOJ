#include<stdio.h>
#include<string.h>

int main(void)
{
    char c[15];
    scanf("%s", c);
    int ans = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == 'A' || c[i] == 'B' || c[i] == 'C')
        {
            ans += 3;
        }
        else if (c[i] == 'D' || c[i] == 'E' || c[i] == 'F')
        {
            ans += 4;
        }
        else if (c[i] == 'G' || c[i] == 'H' || c[i] == 'I')
        {
            ans += 5;
        }
        else if (c[i] == 'J' || c[i] == 'K' || c[i] == 'L')
        {
            ans += 6;
        }
        else if (c[i] == 'M' || c[i] == 'N' || c[i] == 'O')
        {
            ans += 7;
        }
        else if (c[i] == 'P' || c[i] == 'Q' || c[i] == 'R' || c[i] == 'S')
        {
            ans += 8;
        }
        else if (c[i] == 'T' || c[i] == 'U' || c[i] == 'V')
        {
            ans += 9;
        }
        else if (c[i] == 'W' || c[i] == 'X' || c[i] == 'Y' || c[i] == 'Z')
        {
            ans += 10;
        }
    }
    printf("%d", ans);
    return 0;
}