#include<stdio.h>
#include<string.h>

int main()
{
    char a[500];
    while(1)
    {
        gets(a);
        if(a[0]=='E'&&a[1]=='N'&&a[2]=='D')
        {
            break;
        }
        else
        {
            for(int i=strlen(a)-1;i>=0;i--)
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}