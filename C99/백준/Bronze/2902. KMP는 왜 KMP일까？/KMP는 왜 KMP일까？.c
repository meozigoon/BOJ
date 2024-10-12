#include<stdio.h>
#include<string.h>

int main()
{
    char c[1000];
    scanf("%s",c);
    int i;
    printf("%c",c[0]);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='-')
        {
            printf("%c",c[i+1]);
        }
    }
    return 0;
}