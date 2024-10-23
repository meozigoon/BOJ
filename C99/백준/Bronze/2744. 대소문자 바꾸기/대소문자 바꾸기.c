#include<stdio.h>
#include<string.h>

int main()
{
    char c[100];
    scanf("%s",c);
    int i;
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]>='A'&&c[i]<='Z')
        {
            c[i]+=32;
        }
        else if(c[i]>='a'&&c[i]<='z')
        {
            c[i]-=32;
        }
    }
    printf("%s",c);
    return 0;
}