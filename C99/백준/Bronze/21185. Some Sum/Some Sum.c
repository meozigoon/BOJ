#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    if(n%4==0) 
    {
        printf("Even");
    }
    else if(n%4 == 2)
    {
        printf("Odd");
    }
    else
    {
        printf("Either");
    }
    return 0;
}