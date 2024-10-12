#include<stdio.h>
#include<string.h>

int main()
{
    char c1[1000];
    char c2[1000];
    scanf("%s",c1);
    scanf("%s",c2);
    if(strlen(c1)>=strlen(c2))
    {
        printf("go");
    }
    else
    {
        printf("no");
    }
    return 0;
}