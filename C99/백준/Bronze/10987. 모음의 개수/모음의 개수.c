#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int i;
    int cnt=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}